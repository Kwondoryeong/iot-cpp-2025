/*
	pointer - 주소의 크기는 컴퓨터 환경에 따라 다르다.
	포인트변수의 크기는 타입에 상관없이 일정하다.(컴퓨터 비트)
		> 주소 크기는 일정하므로
*/
#include<stdio.h>

int main(void) {
	char ch;
	int n;
	char* pch = &ch;
	int* pn = &n;
	printf("char 주소 크기 : %d\t", sizeof(&ch));
	printf("int 주소 크기 : %d\n", sizeof(&n));
	printf("char 포인터 크기 : %d\t", sizeof(pch));
	printf("int 포인터 크기 : %d\n", sizeof(pn));
	// 32비트 컴퓨터 4byte, 64비트 컴퓨터 8byte > 주소 크기 8byte로 구성되어 있음
	// 32비트 컴퓨터는 8g 메모리(RAM) 달아도 전부 사용 불가 4g까지밖에 할당 불가

	return 0;
}