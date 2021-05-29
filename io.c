#include <stdio.h>

int main(void) {

    int a, b; // 정수 : int(%d)    실수 : float(%f)    문자 : char(%c)   문자열 : string(%s) ...
	// a = 4;
	// // int a = 4;
	// b = 5;
	// c = 6;


    scanf("%d %d", &a, &b); // 변수 앞에 &

    printf("output : %f\n", a); // printf("Hello World"); 변수 이름만

    return 0;
}

// 숫자를 입력해주세요 : 1
// 결과값 : 1