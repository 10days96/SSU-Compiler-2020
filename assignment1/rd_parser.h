#include <stdio.h>
#include <stdlib.h>

typedef union Operand {
    int int_value;
    double double_value;
} Operand;

void get_token();
Operand expression();
Operand term();
Operand factor();
void error(int i);
