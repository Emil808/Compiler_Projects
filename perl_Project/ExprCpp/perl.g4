grammar perl;

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : declarations method_delcarations main_method; 

main_method : MAIN '{' compound_stmt '}'; 

declarations: (variable_delcaration)*; 

method_delcarations : (function | procedure)* ;

function locals [int locals_var, int stack_var]: IDENTIFIER '(' parameters ')' TYPEID '{' declarations compound_stmt'}' ';' ; 
procedure locals [int locals_var, int stack_var]: IDENTIFIER '(' parameters ')' '{' declarations compound_stmt '}' ';' ; 
parameters : (variable_delcaration)*;

variable_delcaration : TYPEID variable ';'; 

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
	 | return_stmt
	 ;
	 
assignment_stmt : variable ASSIGN expr ';' ; 
return_stmt : 'return' variable
			| 'return' number
			; 


if_stmt : IF '(' expr ')' '{' compound_stmt '}' (ELSE_IF '(' expr ')' '{' compound_stmt '}')* (ELSE '{' compound_stmt '}' )? ; 

printStmt      : PRINTF '(' formatString printArg* ')' ';' ;

formatString   : STRING ;
printArg       : ',' expr ;
	
while_stmt: WHILE '(' expr ')' '{' compound_stmt '}';
until_stmt: UNTIL '(' expr ')' '{' compound_stmt '}';
do_while_stmt: DO '{' compound_stmt '}' WHILE '(' expr ')' ';' ; 

expr locals [ TypeSpec *type = nullptr ]
	 : expr power_op expr		# powerExpr		// New
	 | expr mul_div_op expr		# muldivExpr
	 | expr add_sub_op expr		# addsubExpr
	 | expr rel_op expr			# relopExpr
	 | expr shift_op expr		# shiftExpr
	 | expr bit_op expr			# bitopExpr
	 | number					# unsignednumExpr
	 | signed_number			# signednumExpr
	 | variable					# variableExpr
	 | '(' expr ')' 			# parenthExpr
	 
	 ; 
	 
// is part of perl that variables start with $
variable  : '$' IDENTIFIER ; 

power_op : POWER_OP;	// New
mul_div_op : MUL_OP | DIV_OP | MOD_OP; 
shift_op: LShift_OP | RShift_OP;

add_sub_op : ADD_OP | SUB_OP ; 
rel_op : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; 
bit_op: OR_OP | AND_OP | NAND_OP | NOR_OP;
//Neg_OP | Two_Comp_OP;

// Predefined symbols
IF  : 'if';
ELSE : 'else';
ELSE_IF : 'elseif'; 
WHILE : 'while'; 
UNTIL : 'until'; 
DO : 'do'; 
MAIN : 'main';
TRUE : 'TRUE'; 
FALSE: 'FALSE'; 

sign   : ADD_OP | SUB_OP ;
number locals [ TypeSpec *type = nullptr ] 
	: INTEGER	# INTConst
	| REAL 		# FloatConst
	| EXPONENT  # Exponent	// New
	| BOOL 		# BOOLConst
	;
signed_number : sign number ;

PRINTF  : 'printf' ;
IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
EXPONENT   : INTEGER POWER_OP INTEGER | INTEGER;	// New
REAL : INTEGER '.' INTEGER; 
BOOL : TRUE | FALSE; 



MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;
POWER_OP :  '^' ; 	// New
MOD_OP :   '%' ; 
ASSIGN : '='; 

EQ_OP : '==' ;
NE_OP : '!=' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

LShift_OP: '<<';
RShift_OP: '>>';
 
OR_OP: '|'; 
AND_OP: '&';
NAND_OP: '/&';
NOR_OP: '/|';
Neg_OP:'/~';
Two_Comp_OP:'//';


NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 

QUOTE  : '\'' ;
STRING : QUOTE STRING_CHAR* QUOTE ;

fragment STRING_CHAR : QUOTE QUOTE  // two consecutive quotes
                     | ~('\'')      // any non-quote character
                     ;