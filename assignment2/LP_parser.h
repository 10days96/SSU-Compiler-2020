#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
구조체
*/

typedef enum
{
    false,
    true
} bool;

void yyparse(); // int
void push(int i);
void shift(int i);
void reduce(int i);
void yyerror();
int yylex(); // int
void lex_error();