#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef enum
{
    false,
    true
} bool;

typedef struct _num
{
    bool type; // true: int,
    int int_val;
    double double_val;
} num;

void yyparse(); // int
void push(int i);
void shift(int i);
void reduce(int i);
void yyerror();
int yylex(); // int
void lex_error();