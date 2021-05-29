#include <stdio.h>

int self(int n)
{
    int sum = n;

    while (n != 0)
    {
        // n = 35
        // sum에 n을 10으로 나눈 나머지를 더해준다 first loop : sum = 35 + 5 / second loop : sum = 40 + 3 = 43
        sum += n%10;
        // n을 10으로 나눈 값을 n에 다시 저장 first loop : n = 3 / second loop : n = 0
        n /= 10;
    }

    return sum; // return 43
}

int main(void)
{
    int l[10050] = {0}; // [0, 0, 0, ... , 0]
    int i;

    for(i = 0; i<10000; i++)
    {
        // l의 self(i)번 째 값을 1로 바꿔줍니다
        l[self(i)] = 1; // l의 43번째 값을 1로 바꿔줍니다.
    }

    //l의 원소가 1인 인덱스 값이 전부 셀프 넘버 X.

    for(i = 0; i < 10000; i++)
    {
        // l[i] == 0 일 때, i를 출력
        if (l[i] == 0)
        {
            printf("%d\n", i); // 어떤 i값을 넣더라도 6507이라는 값을 산출해낼 수가 없다
        }
    }

    return 0;
}