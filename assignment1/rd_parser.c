#include "rd_parser.h"

typedef enum Token
{
    ERROR,
    NUMBER,
    PLUS,
    STAR,
    LP,
    RP,
    END
} Token;

Operand num;
int str_idx = 0;
Token token;
bool flag;
char str[100];
int main(void)
{
    Operand result;
    printf(">>> ");

    for (int i = 0; i < 100; i++)
    {
        char c = getchar();
        if (c == '\n')
            break;
        str[i] = c;
    }

    get_token();
    result = expression();

    if (token != END)
        error_msg(3);

    else
    {
        if (flag)
            printf("waring: integer and real number operation\n");

        if (result.type == 0) // 정수인 경우
            printf(">>> %d\n", result.int_value);

        else if (result.type == 1)
            printf(">>> %f\n", result.double_value);
    }

    return 0;
}

Operand expression()
{
    Operand result;
    result = term();
    while (token == PLUS)
    {
        get_token();
        if (result.type == 0) // 정수인 경우
        {
            Operand tmp;
            tmp = term();
            if (tmp.type == 0)
                result.int_value += tmp.int_value;
            else
            {
                flag = true;
                result.double_value = result.int_value;
                result.double_value += tmp.double_value;
                result.type = 1;
            }
        }

        else // 실수인 경우
        {
            Operand tmp;
            tmp = term();
            if (tmp.type == 0)
            {
                flag = true;
                result.double_value += tmp.int_value;
            }

            else
            {
                result.double_value += tmp.double_value;
            }
        }
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
        Operand tmp = factor();

        if (result.type == 0) //정수인 경우
        {
            if (tmp.type == 0)
                result.int_value *= tmp.int_value;

            else
            {
                flag = true, result.type = 1;
                result.double_value = (double)result.int_value * tmp.double_value;
            }
        }

        else // 실수인 경우
        {
            if (tmp.type == 0)
            {
                flag = true;
                result.double_value *= (double)tmp.int_value;
            }

            else
            {
                result.double_value *= tmp.double_value;
            }
        }
        // result = result * factor();
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
            error_msg(2);
    }
    else
        error_msg(1);

    num.int_value = 0, num.double_value = 0, num.type = 0;
    return result;
}

void get_token()
{
    //t_token --> token
    //number value --> num
    char t_token = str[str_idx];
    str_idx += 1;

    if (t_token >= '0' && t_token <= '9')
    {
        token = NUMBER;
        // int value = t_token - '0';
        num.int_value += t_token - '0';
        num.type = 0;

        for (int i = str_idx;; i++)
        {
            t_token = str[i];

            if ((t_token < '0' || t_token > '9') && t_token != '.')
            {
                str_idx = i;
                break;
            }

            if (t_token == '.')
            {
                num.double_value += num.int_value;
                num.type = 1;
                continue;
            }

            if (num.type == 0) // 정수인 경우
                num.int_value *= 10, num.int_value += t_token - '0';
            else
                num.double_value += (t_token - '0') * 0.1;
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

    else if (t_token == '\0')
        token = END;

    else if (t_token == ' ')
        get_token();

    else
        token = ERROR;
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
        // case 4:
        //     printf("waring: integer and real number operation\n");
        //     return;
    }

    exit(1);
}
