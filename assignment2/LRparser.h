#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef enum
{
    false,
    true
} bool;

typedef union _intflaot
{
    int int_val;
    double double_val;
} intflaot;

typedef struct _operand
{
    bool type; // true: int,
    intflaot value;
} oper;

void yyparse(); // int
void push(int i);
void shift(int i);
void reduce(int i);
void yyerror();
int yylex(); // int
void lex_error();