/*
	전역변수
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void incFunc(int);
void incFunc2();

int cnt2 = 0;						// 전역변수 경우 초기화 하지 않으면 자동으로 0으로 초기화

int main(void) {
	int cnt = 0;					// 이름만 같을 뿐 다른 메모리에 만들어진 cnt변수

	for (int i = 0; i < 5; i++) {
		incFunc(cnt);
		printf("\t(main)incFunc > cnt : %d\n", cnt);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		incFunc2();
		printf("(main)incFunc2 > cnt2 : %d\n", cnt2);
	}

	return 0;
}
/* call by value : main에 있는 cnt값을 복사해서 사용 > incFunc 함수에 있는 cnt값이 증가*/
void incFunc(int cnt) {				// 이름만 같을 뿐 다른 메모리에 만들어진 cnt변수
	cnt++;							// 전역변수와 지역변수 이름 같을 시 지역변수가 우선임 > main cnt값 증가 안됨
	printf("incFunc cnt : %d\t", cnt);
}

void incFunc2() {				
	cnt2++;							
	printf("incFunc2 cnt2 : %d\t", cnt2);
}