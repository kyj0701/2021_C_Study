#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }

        for(int k=0; k<=n-i-2; k++)
        {
            printf("  ");
        }

        for (int l=0; l<=i; l++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i=n-1; i>=0;i--)
    {
        if(i != n-1)
        {
            for(int j=0; j<=i; j++)
            {
                printf("*");
            }

            for(int k=0; k<=n-i-2; k++)
            {
                printf("  ");
            }

            for (int l=0; l<=i; l++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}