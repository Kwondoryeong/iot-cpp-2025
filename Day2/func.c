#include<stdio.h>

/*
	함수 : 입력과 출력이 없는 함수 - 
	함수안에서 결과를 나타낸다.
*/
// 사용자 정의 함수
void func() {			// 함수 정의 : 함수의 기능을 여기에 작성한다.
	int a = 10, b = 20;
	
	printf("void func()\n");
	printf("a + b = %d", a + b);
}

int main(void) {
	func();
	return 0;
}