#include <stdio.h>

int sub(int a)
{

    if (a == 1)
    {
        return 1;
    }

    return a * sub(a-1);
}

int main(void)
{
    int num = 10;

    printf("%d", sub(num));

    return 0;
}