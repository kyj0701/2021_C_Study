#include <stdio.h>

int main(void)
{
    int s;
    scanf(/* 배열 길이 s 입력*/);

    int a[s];

    for (/* 0 ~ s */)
    {
        scanf(/* 배열 원소 입력 ( &a[i] )*/);
    }

    int min = a[0];
    int max = a[0];

    for(/* 0 ~ s */)
    {
        if (/* a[i]가 min 보다 작으면 */)
        {
            /* min에 a[i] 저장 */
        } 
        else if (/* a[i] max보다 크면 */)
        {
            /* max에 a[i] 저장 */
        }
    }

    printf("%d %d", min, max);

    return 0;
}