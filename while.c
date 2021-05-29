#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 1;

    while (a != 0 && b != 0)
    {
        /* a, b 입력 */ scanf("%d %d", &a, &b);
        /* a + b 출력 */ if(a + b != 0) printf("%d\n", a + b);
    }

    return 0;
}