#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char myName[20];
	int myAge;
	
	printf("이름을 입력하세요 : ");
	scanf_s("%s", myName, (unsigned int)(sizeof(myName)));
	
	while (getchar() != '\n');

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &myAge);
	
	// printf("이름을 입력하세요 : ");
	// scanf_s("%s %d", myName, &myAge);
	printf("\n");
	printf("이름 : %s\n", myName);
	printf("나이 : %d\n", myAge);
	
	return 0;
}