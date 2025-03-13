#include <stdio.h>
/*
	함수 : 입력과 출력이 있는 함수
*/
int func(int a, int b) {	// int형의 출력값이 있음
	int res = a + b;

	return res;
}

int main(void) {
	int result = func(10, 20); // return값인 res 저장
	
	printf("호출 후 리턴된 값: %d\n", result);

	return 0;
}