#include "rd_parser_tmp.h"

// Operand num;
typedef enum Token
{
    null,
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

int num;
Token token;

int main(void)
{
    char str[100] = {
        '\0',
    };
    int result;

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
        error_msg(3);

    else
        printf("%d\n", result);

    return 0;
}

int expression()
{
    int result;
    result = term();
    while (token == PLUS)
    {
        get_token();
        result = result + term();
    }
    return result;
}

int term()
{

    int result;
    result = factor();
    while (token == STAR)
    {
        get_token();
        result = result * factor();
    }

    return result;
}

int factor()
{
    int result;
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
            error_msg(2);
    }
    else
        error_msg(1);

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
