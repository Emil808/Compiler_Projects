
grammar perl;

// need statements, expressions
stmt : assignment_stmt
	 | if_stmt
	 ;
	 
assignment_stmt : IDENTIFIER ASSIGN number; 

if_stmt : IF '(' expr ')' '{' stmt '}' (ELSE_IF '(' expr ')' '{' stmt '}')+ (ELSE '{' stmt '}')? ; 

expr : number
	 | IDENTIFIER
	 ;

variable : '$' IDENTIFIER ; 
	 
rel_op : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ; 

// Predefined symbols
IF  : 'if';
ELSE : 'else';
ELSE_IF : 'elsif'; 

number : sign? INTEGER ;
sign   : '+' | '-' ;

IDENTIFIER : '$' [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;


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