#include <stdio.h>
#include <stdlib.h>

// typedef union Operand {
//     int int_value;
//     double double_value;
// } Operand;

void get_token();
int expression();
int term();
int factor();
void error_msg(int i);
