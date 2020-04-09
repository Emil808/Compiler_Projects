
grammar perl;

// need statements, expressions
stmt : assignment_stmt
	 | if_stmt
	 | while_stmt
	 | until_stmt
	 ;
	 
assignment_stmt : IDENTIFIER ASSIGN expr ';' ; 

if_stmt : IF '(' expr ')' '{' stmt '}' (ELSE_IF '(' expr ')' '{' stmt '}')+ (ELSE '{' stmt '}')? ; 
while_stmt: WHILE '(' expr ')' '{' stmt '}';
until_stmt: UNTIL '(' expr ')' '{' stmt '}';

expr : expr POW_OP
	 | expr mul_div_op expr
	 | expr add_sub_op expr
	 | expr rel_op expr
	 | number
	 | IDENTIFIER
	 | '(' expr ')' 
	 ; 
// is part of perl that variables start with $
variable : '$' IDENTIFIER ; 

mul_div_op : MUL_OP | DIV_OP | MOD_OP; 
add_sub_op : ADD_OP | SUB_OP ; 
rel_op : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; 

// Predefined symbols
IF  : 'if';
ELSE : 'else';
ELSE_IF : 'elsif'; 
WHILE : 'while'; 
UNTIL : 'until'; 

number : sign? INTEGER ;
sign   : '+' | '-' ;


IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
//need another data type

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