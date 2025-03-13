#include<stdio.h>

int main(void) {
	int n = 10, n2 = 20;
	int res;

	res = (n < n2) ? n : n2;		// n과 n2 비교 후 참이면 n, 거짓이면 n2
	printf("res: %d\n", res);		// 10
	res = (n > n2) ? n : n2;		
	printf("res: %d\n", res);		// 20

	res = n++;
	printf("res: %d, n: %d\n", res, n);			// 후위연산자 n 넘긴 후 증가
	res = ++n2;
	printf("res: %d, n2: %d\n", res, n2);		// 전위연산자 증가시킨 후 n 넘김

	return 0;
}

