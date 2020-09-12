#include "rd_parser.h"

Operand num;
typedef enum
{
    END,
    NUMBER,
    FLOAT,
    PLUS,
    MINUS,
    STAR,
    DIVIDE,
    LP,
    RP,
    END
} Token;

Token token;

int main(void)
{
    char str[100] = {
        '\0',
    };
    Operand result;

    char ch;
    int i = 0;
    while (ch = getchar() != '\n')
    {
        str[i] = ch;
        // get_token(ch);
    }

    get_token();
    result = expression();

    if (token != END)
        error(3);

    else
        printf("%d\n", result);

    return 0;
}

Operand expression()
{
    Operand result;
    result = term();
    while (token == PLUS)
    {
        get_token();
        result = result + term();
    }
    return result;
}

Operand term()
{

    Operand result;
    result = factor();
    while (token == STAR)
    {
        get_token();
        result = result * factor();
    }

    return result;
}

Operand factor()
{
    Operand result;
    if (token == NUMBER)
    {
        result = num;
        get_token();
    }

    else if (token == LP)
    {
        get_token();
        result = expression();
        if (token == RP)
            get_token();
        else
            error(2);
    }
    else
        error(1);

    return result;
}

void get_token()
{

    //t_token --> token
    //number value --> num
}

void error_msg(int i)
{
    switch (i)
    {
    case 1:
        printf("error: number or '(' expected\n");
        break;
    case 2:
        printf("error: ')' expected\n");
        break;
    case 3:
        printf("error EOF expected\n");
        break;
    }

    exit(1);
}
