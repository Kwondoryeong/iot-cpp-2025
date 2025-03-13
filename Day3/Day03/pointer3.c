/*
	두 값을 바꾸는 알고리즘
*/
#include<stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int temp = 0;
	printf("변경 전 a: %d, b: %d\n", a, b);
	
	temp = a;
	a = b;
	b = temp;

	printf("변경 후 a: %d, b: %d\n", a, b);

	return 0;
}