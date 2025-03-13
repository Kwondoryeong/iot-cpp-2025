#include<stdio.h>

int main(void) {
	int r = 10;
	const double pi = 3.14;		// pi 상수화 > pi 변수명 자체를 상수화
	double cf = 2 * pi * r;		// 3.14 라는 값은 상수화x
	
	double* dp = &pi;			// 포인터 간접 참조를 통한 값 변경은 가능함
	*dp = 4.0;
	printf("원둘레 : %lf\n",cf);
	printf("pi : %lf\n", pi);

	cf = 2 * pi * r;			
	printf("원둘레 : %lf\n", cf); // 값 변경됨

	return 0;
}