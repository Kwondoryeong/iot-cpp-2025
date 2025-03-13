/*
	문자
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char ch1;
	char ch2 = ' ';

	scanf(" %c %c", &ch1, &ch2);	// 입력버퍼로 인해 원하는 값 나오지 않을 수 있음 " %c" 사용

	printf("[%c%c]", ch1, ch2);
	return 0;
}