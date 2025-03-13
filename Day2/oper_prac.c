#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a;
	char ch;
	printf("정수 입력 : ");
	scanf("%d", &a);
	// while (getchar() != '\n');
	getchar();
	printf("문자 입력 : ");
	scanf("%c", &ch);


	return 0;
}