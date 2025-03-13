/* 변수 선언 */
#include<stdio.h>

int main(void) {
	int num;		// 자료형 변수명
	num = 10;		// (대입)연산자 1, 피연산자2 이항연산자 : 연산자 기준으로 피연산자가 2개
	int num2 = 10;	// 변수 초기화, 10 -> 리터럴 상수 값
	char ch = 'A';	// 문자타입 변수 선언
	double db = 3.14;

	printf("num의 값 : %d\n", num);
	printf("num2의 값 : %d\n", num2);
	printf("ch의 값 : %c\n", ch);
	printf("db의 값 : %lf\n", db);
	return 0;
}