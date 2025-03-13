/* 실수 자료형 */
#include<stdio.h>

int main(void) {
	float f = 1.12345678912345;
	double d = 1.12345678912345;

	printf("float : %.15f\n", f);
	printf("double: %.15lf\n", d); // double형 정밀도가 높음
	return 0;
}