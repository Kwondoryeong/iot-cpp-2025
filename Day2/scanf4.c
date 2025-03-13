#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char strName[20];
	int age;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	while (getchar() != '\n');
	// fflush(stdin);

	printf("이름을 입력하세요 : ");
	scanf_s("%s", strName, (unsigned int)(sizeof(strName)));
	// scanf("%s", strName);
	printf("나이는 : %d\n", age);
	printf("이름은 : %s\n", strName);

	return 0;
}