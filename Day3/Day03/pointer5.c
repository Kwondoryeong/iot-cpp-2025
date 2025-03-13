/*
	배열과 포인터, 배열이름이 주소
*/

#include<stdio.h>

int main() {
	int ary[5];
	int* pa = ary; // 배열은 이름이 시작주소, (&) 주소연산자 필요X

	*pa = 10;
	printf("*pa: %d, ary[0]: %d\n", *pa, ary[0]);
	printf("pa: %d\n", pa + 0);
	printf("pa + 1 : %d\n", pa + 1);

	*(pa + 1) = 20;
	printf("*pa + 1: %d, ary[1]: %d\n", *(pa+1), ary[1]); // 포인터 사용시 *()
	printf("pa[2] : %d\n", pa[2]);						  // [ ] == *( ) 같은 의미 : 포인터 연산식

	return 0;
}