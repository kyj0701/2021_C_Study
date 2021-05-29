#include <stdio.h>

int main(void)
{
    // int a[3] = {1,2,3};

    // printf("1. list a : %d %d %d\n", a[0], a[1], a[2]);

    // a[0] = 3;
    // a[1] = 1;
    // a[2] = 2;

    // printf("2. list a : %d %d %d\n", a[0], a[1], a[2]);


    int b[10];

    for (int i = 0; i < 10; i++)
    {
        b[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}