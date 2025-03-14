/*
	이중 포인터 사용하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printAry(char**, int);

int main() {
	char* ary[] = { "mango", "apple", "banana" }; // 포인터 배열

	printAry(ary, 3);

	return 0;
}

void printAry(char** pary, int size) {				// 매개변수 잘 모를 경우 사용??
	for (int i = 0; i < size; i++) {
		printf("%s\t", pary[i]);
		printf("%s\n", *(pary + i));
	}

}

