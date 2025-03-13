#include <stdio.h>
/*
	함수 : 입력이 있는 함수
*/
void func(int a, int b) {
	printf("void func()\n");
	printf("a + b = %d", a + b);
}

int main(void) {
	func(10, 20);
	return 0;
}