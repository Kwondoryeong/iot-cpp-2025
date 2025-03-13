/*
	pointer - 주소
	포인터 변수 - 주소를 저장할 수 있는 변수
*/
#include<stdio.h>

int main(void) {
	// int p;	// int 타입의 변수 선언
	// int* p;	// int 타입의 포인터 변수 선언 > 선언부 포인터 변수 표시 > 연산자x
	char* pc;	// char타입의 포인터 변수 선언 > 선언부 포인터 변수 표시 > 연산자x, pc의 타입이 pointer of char
				// 포인터 변수는 주소를 저장하기 위해 무조건 4byte
	double *pd;	// *pd의 타입이 double
	int num = 0;

	
	printf("num의 주소 : %p\n", &num);						// 시작주소
	printf("num의 값 : %d\n", num);
	int *p = &num;											// 포인터 변수라는 표시
	printf("포인터 변수 p에 저장된 값(주소 : %p\n", p);
	printf("포인터 변수 P가 가리키는 곳의 값: %d\n", *p);	// 간접참조 연산자
	num += 1;												// 포인터가 가리키고 있는 곳의 값을 +1
	printf("num : %d, *p: %d\n", num, *p);					// 가리키는 값과 포인터 모두 1증가
	*p += 1;												// 포인터 값 +1 == 포인터가 가리키고 있는 곳 값 +1
	printf("num : %d, *p: %d\n", num, *p);					// 가리키는 값과 포인터 모두 1증가


	printf("sizeof(int* p) : %d\n", (int unsigned)sizeof(int*));
	printf("sizeof(char* p) : %d\n", (int unsigned)sizeof(char*));
	printf("sizeof(double* p) : %d\n", (int unsigned)sizeof(double*));

	return 0;
}