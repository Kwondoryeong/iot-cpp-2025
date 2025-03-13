#include<stdio.h>

int main(void) {
	int n = 10;
	int n2 = 3;
	double res;
	
	res = n / 3;					// 정수를 실수로 나타내기 위해 소수점만 붙음
	printf("res : %.1lf\n", res);
	res = (double)n / 3;			// 형변환 후 정상 출력
	printf("res : %.1lf\n", res);
	res = n / 3.0;					// 정상 출력
	printf("res : %.1lf\n", res);
	res = (double)n / 3.0;			// 정상 출력
	printf("res : %.1lf\n", res);


	return 0;
}

// num = 10;
// str(num);