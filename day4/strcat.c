/*
	strcat - 문자열을 붙히는 함수
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char str[100] = "apple";

	strcat(str, "banana");
	printf("%s\n", str);

	strncat(str, "ORANGE", 3);
	printf("%s\n", str);

	return 0;
}