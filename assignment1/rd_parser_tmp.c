#include "rd_parser_tmp.h"

typedef enum Token
{
    ERROR,
    NUMBER,
    FLOAT,
    PLUS,
    STAR,
    LP,
    RP,
    END
} Token;

int num = 0, str_idx = 0;
Token token;
bool flag;
char str[100];
int main(void)
{
    int result;
    printf(">>> ");

    // for (int i = 0; i < 100; i++)
    // {
    //     char c = getchar();
    //     if (c == '\n')
    //         break;
    //     str[i] = c;
    // }

    get_token();
    // getchar();
    result = expression();

    if (token != END)
        error_msg(3);

    else
        printf(">>> %d\n", result);

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

    num = 0;
    return result;
}

void get_token()
{
    //t_token --> token
    //number value --> num
    char t_token = getchar();
    // str[str_idx] = getchar();

    if (t_token >= '0' && t_token <= '9')
    {
        token = NUMBER;
        num += t_token - '0';
        for (int i = str_idx + 1;; i++)
        {
            t_token = getchar();
            // str[i] = getchar();
            if (t_token < '0' || t_token > '9')
            {
                str_idx = i;
                break;
            }
            num *= 10, num += str[i] - '0';
        }
    }

    else if (t_token == '+')
        token = PLUS;

    else if (t_token == '*')
        token = STAR;

    else if (t_token == '(')
        token = LP;

    else if (t_token == ')')
        token = RP;

    else if (t_token == ' ')
    {
        // str_idx += 1;
        t_token = get_token();

        // return;
    }

    else if (t_token == '\0' || t_token == '\n')
        token = END;

    else
        token = ERROR;

    return t_token;
    // str_idx += 1;
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
        printf("error: EOF expected\n");
        break;
    }

    exit(1);
}
