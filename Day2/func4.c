#include <stdio.h>
/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/

int func(int, int);	// 함수선언, 함수 원형

int main(void) {
	int result = func(10, 20); // return값인 res 저장

	printf("호출 후 리턴된 값: %d\n", result);

	return 0;
}

int func(int a, int b) {	// int형의 출력값이 있음
	int res = a + b;

	return res;
}
