#include <stdio.h>

int main(void) {
	int i, j, n;
	int c[10000];
	int tmp;

	scanf("%d", &n); // 배열 길이

	/* for문으로 배열 입력받기 */
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
	}

	/* 버블 정렬 */
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-1; j++)
		{
			if (c[j] > c[j+1]/* c[j]와 c[j+1] 대소비교 */)
			{
				/* swap 구현 ex) [1,2] => [2,1] */
				tmp = c[j];
				c[j] = c[j+1];
				c[j+1] =  tmp;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		/* 출력 형태 맞추어 정렬된 배열 출력 */
		printf("%d ", c[i]);
	}
	return 0; 
}