/*
	2차원 char 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char fruit[5][10];

	printf("과일 5가지를 입력하세요 > ");
	for (int i = 0; i < 5; i++) {
		scanf("%s", fruit[i]);				// 주소연산자& 사용X
	}

	printf("-- 과일 종류 --\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", fruit[i]);
	}

	return 0;
}
