#include <stdio.h>
#include <stdlib.h>

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

Operand num;
Token token, end_token;
bool flag;

int main(void)
{
    Operand result;
    printf(">>> ");

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

    if (end_token >= PLUS && end_token <= END)
    {
        token = end_token;
        end_token = -1;
        return;
    }
    char t_token = getchar();

    if (t_token >= '0' && t_token <= '9')
    {
        token = NUMBER;
        num.int_value += t_token - '0';
        num.type = 0;

        while (1)
        {
            t_token = getchar();

            if ((t_token < '0' || t_token > '9') && t_token != '.')
            {
                switch (t_token)
                {
                case '\n':
                    end_token = END;
                    break;
                case ')':
                    end_token = RP;
                    break;

                case '+':
                    end_token = PLUS;
                    break;

                case '*':
                    end_token = STAR;
                    break;
                }

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

    else if (t_token == '\n')
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
    }

    exit(1);
}
