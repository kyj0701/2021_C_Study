#include<stdio.h>

int main(void)
{
    int array[300][300];
    int k, l, t;
    int i, j, x, y;
    int N, M, K;
    int sum;

    scanf("%d %d", &N, &M);


    // 2차원 배열 데이터 입력
    for(k = 0; k < N; k++)
    {
        for(l = 0; l < M; l++)
        {
            printf("Input integer. : ");
            scanf("%d", &array[k][l]);
        }
    }

    // 2차원 배열 데이터 출력
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%3d", array[i][j]); // array[0][0], array[0][1]
            // 1의 좌표 : (0,0) 2의 좌표 : (0,1) 3의 좌표 (0,2)
            // 3의 좌표 : (1,0) 4의 좌표 : (1,1) 6의 좌표 (2,2)
        }
        printf("\n");
    }


    // 2차원 배열 데이터의 합
    scanf("%d", &K);

    for (t = 0; t < K; t++)
    {
        scanf("%d %d %d %d", &i, &j, &x, &y);

        for (k = i-1; k < x; k++) // (0,0) ~ (N-1, M-1)
        {
            for (l = j-1; l < y; l++)
            {
                sum += array[k][l];
            }
        }

        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}