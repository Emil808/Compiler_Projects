grammar perl;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : declarations compound_stmt; 

declarations: (variable_delcaration)*; 

variable_delcaration : TYPEID variable; 

TYPEID : 'i'
	| 'f'
	| 'b'
	; 
compound_stmt : (stmt)+ ;

stmt : assignment_stmt
	 | if_stmt
	 | while_stmt
	 | until_stmt
	 | do_while_stmt
	 | printStmt
	 ;
	 
assignment_stmt : variable ASSIGN expr ';' ; 

//don't now how to handle 0 or more else if statements in pass2
if_stmt : IF '(' expr ')' '{' compound_stmt '}' (ELSE '{' compound_stmt '}' )? ; 

printStmt      : PRINTF '(' formatString printArg* ')' ';' ;

formatString   : STRING ;
printArg       : ',' expr ;
	
while_stmt: WHILE '(' expr ')' '{' compound_stmt '}';
until_stmt: UNTIL '(' expr ')' '{' compound_stmt '}';
do_while_stmt: DO '{' compound_stmt '}' WHILE '(' expr ')' ';' ; 

expr locals [ TypeSpec *type = nullptr ]
	 : expr POW_OP expr			# powExpr
	 | expr mul_div_op expr		# muldivExpr
	 | expr add_sub_op expr		# addsubExpr
	 | expr rel_op expr			# relopExpr
	 | number					# unsignednumExpr
	 | signed_number			# signednumExpr
	 | variable					# variableExpr
	 | '(' expr ')' 			# parenthExpr
	 ; 
	 
// is part of perl that variables start with $
variable  : '$' IDENTIFIER ; 

mul_div_op : MUL_OP | DIV_OP | MOD_OP; 
add_sub_op : ADD_OP | SUB_OP ; 
rel_op : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; 

// Predefined symbols
IF  : 'if';
ELSE : 'else';
ELSE_IF : 'elseif'; 
WHILE : 'while'; 
UNTIL : 'until'; 
DO : 'do'; 


 
sign   : '+' | '-' ;
number locals [ TypeSpec *type = nullptr ] 
	: INTEGER	# INTConst
	| REAL 		# FloatConst
	| BOOL 		# BOOLConst
	;
signed_number locals [ TypeSpec *type = nullptr ] : sign number ;


PRINTF  : 'printf' ;
IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
REAL : INTEGER '.' INTEGER; 
BOOL : TRUE | FALSE; 
//need another data type
TRUE : 'TRUE'; 
FALSE: 'FALSE'; 
MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;
POW_OP :  '**' ; 
MOD_OP :   '%' ; 
ASSIGN : '='; 

EQ_OP : '==' ;
NE_OP : '!=' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

QUOTE  : '\'' ;
STRING : QUOTE STRING_CHAR* QUOTE ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;