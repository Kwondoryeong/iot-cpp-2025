/*
	swap
*/
#include<stdio.h>


void swap();

int main(void) {
	int a = 10;
	int b = 20;
	
	printf("호출 전 a: %d, b:%d\n", a, b);
	printf("a : %p, b : %p\n", &a, &b);
	swap(&a, &b);

	printf("호출 후 a: %d, b: %d\n",a, b);

	return 0;
}

void swap(int* pa, int* pb) {
	int temp;
	temp = *pa;		// 간접 참조 연산자 > a의 값, temp = 10
	*pa = *pb;		// a = 20
	*pb = temp;		// b = 10
}