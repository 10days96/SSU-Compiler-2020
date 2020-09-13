#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false,
    true
} bool;

typedef struct Operand
{
    bool type;
    int int_value;
    double double_value;
} Operand;

void get_token();
Operand expression();
Operand term();
Operand factor();
void error_msg(int i);
