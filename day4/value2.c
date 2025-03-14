/*
	static 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void incFunc();
void incFunc2();

int main() {
	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	//scnt++;						// 2. 외부에서 정적변수의 접근은 불허
	//scnt += 1;
	// printf("%d\n", scnt);


	return 0;
}

void incFunc() {
	int cnt = 0;
	cnt++;
	printf("cnt : %d\t", cnt);
}

void incFunc2() {					// 데이터 영역에 저장됨 - 전역변수, 정적변수
	static int scnt = 0;			// 1. 정적지역변수 - 정적변수의 수정은 선언된 블럭 내에서만 가능
	scnt++;							
	printf("scnt : %d\n", scnt);
}

int ary[열] = { 1, 2, 3 };
int ary[행][열];