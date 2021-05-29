#include <stdio.h>

// int plus(int a, int b)
// {
//     return a + b;
// }

int plus(int a, int b);

int main(void)
{
    int i, j;
    int sum;

    scanf("%d %d", &i, &j);

    sum = plus(i, j);

    printf("%d", sum);
    return 0;
}

int plus(int a, int b)
{
    return a + b;
}