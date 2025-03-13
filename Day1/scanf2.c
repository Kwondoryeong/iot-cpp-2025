#include<stdio.h>

int main(void) {
	char str[20];
	printf("문자열을 입력하세요 : ");
	scanf_s("%s", str, sizeof(str));
	
	printf("입력한 문자열 : %s\n", str);

	printf("char 크기 : %d\n", sizeof(char));		// sizeof 함수x 연산자o
	printf("int 크기 : %d\n", sizeof(int));
	printf("float 크기 : %d\n", sizeof(float));
	printf("double 크기 : %d\n", sizeof(double));
	

	return 0;
}