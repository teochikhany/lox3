grammar lox;

program		: declaration* EOF ;

declaration	: classDecl
		| funDecl
		| varDecl
		| statement ;

classDecl	: 'class' IDENTIFIER ( '<' IDENTIFIER )? '{' function* '}' ;
funDecl		: 'fun' function;
varDecl		: 'var' IDENTIFIER ( '=' expression )? ';' ;

statement	: exprStmt
		| forStmt
		| ifStmt
		| printStmt
		| returnStmt
		| whileStmt
		| block ;

exprStmt	: expression ';' ;
forStmt		: 'for' '(' ( varDecl | exprStmt | ';' )
                           expression? ';'
                           expression? ')' statement ;

ifStmt		: 'if' '(' expression ')' statement ( 'else' statement )? ;
printStmt	: 'print' expression ';' ;
returnStmt	: 'return' expression? ';' ;
whileStmt	: 'while' '(' expression ')' statement ;
block		: '{' declaration* '}' ;

expression	: assignment ;

assignment	: ( call '.' )? IDENTIFIER '=' assignment
		| logic_or ;

logic_or	: logic_and ( 'or' logic_and )* ;
logic_and	: equality ( 'and' equality )* ;
equality	: comparison ( ( '!=' | '==' ) comparison )* ;
comparison	: term ( ( '>' | '>=' | '<' | '<=' ) term )* ;

term		: term ( '*' | '/' ) term 
		| term ( '+' | '-' ) term
		| unary ;


unary		: ( '!' | '-' )  unary | call ;
call		: primary ( '(' arguments? ')' | '.' IDENTIFIER )* ;
primary		: 'true' | 'false' | 'nil' | 'this'
		| NUMBER | STRING | IDENTIFIER | '(' expression ')'
		| 'super' '.' IDENTIFIER ;

function	: IDENTIFIER '(' parameters? ')' block ;
parameters	: IDENTIFIER ( ',' IDENTIFIER )* ;
arguments	: expression ( ',' expression )* ;

NUMBER		: DIGIT+ ( '.' DIGIT+ )? ;
STRING		: '"' (ALPHA | DIGIT)*  '"' ;
IDENTIFIER	: ALPHA ( ALPHA | DIGIT )* ;
ALPHA		: [a-zA-Z_] ;
DIGIT		: [0-9] ;

WS :		[ \t\r\n]+ -> skip ;
