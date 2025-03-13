/*
	입력 - scanf()
*/
# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int inputVal = 0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &inputVal);					// &주소연산자, 키보드입력값과 변수의 주소가 다름
	// 키보드를 통해 입력받은 값의 inputVal 메모리 주소 찾아갈 수 있도록 주소연산자 사용
	printf("입력된 정수 : %d\n", inputVal);

	fflush(stdin);

	int n1, n2;
	printf("두개의 정수를 입력하세요 : ");
	scanf_s("%d %d", &n1, &n2);					// 오버플로우 방지 가능
	printf("정수1 : %d\n정수2 : %d", n1, n2);

	return 0;
}