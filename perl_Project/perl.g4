
grammar perl;

// need statements, expressions
stmt : assignment_stmt
	 | if_stmt
	 | while_stmt
	 | until_stmt
	 ;
	 
assignment_stmt : IDENTIFIER ASSIGN expr; 

if_stmt : IF '(' expr ')' '{' stmt '}' (ELSE_IF '(' expr ')' '{' stmt '}')+ (ELSE '{' stmt '}')? ; 
while_stmt: WHILE '(' expr ')' '{' stmt '}';
until_stmt: UNTIL '(' expr ')' '{' stmt '}';

expr : number
	 | IDENTIFIER
	 | expr rel_op expr
	 ; 
// is part of perl that variables start with $
variable : '$' IDENTIFIER ; 
	 
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
ASSIGN : '='; 

EQ_OP : '==' ;
NE_OP : '!=' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ; 