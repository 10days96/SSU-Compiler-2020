#include <stdio.h>

int main(void)
{
    char str[10] = {
        '\0',
    }; // for (int i = 0; i < 4; i++)
    // {
    //     str[i] = getchar();
    // }
    str[0] = getchar();
    str[0] += 1;
    str[1] = getchar();
    str[2] = getchar();
    getchar();

    printf("%s", str);
    return 0;
}