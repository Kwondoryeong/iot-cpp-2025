#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int res;
	int n = 30;

	res = (n > 10) && (n < 20); //  '0' 제외 값 모두 참
	printf("res: %d\n", res);
	res = (n > 10) || (n < 20);
	printf("res: %d\n", res);
	res = (n >= 30);			// 복합 대입 연산자 (비교연산자+대입연산자)
	printf("res: %d\n", res);
	res = !(n >= 30);
	printf("res: %d\n", res);
	
	res = ~n;
	printf("res: %d\n", res);
	res = n << 1;				// 좌측 1비트 쉬프트
	printf("res: %x\n", res);	// Hex : 3c = 60
	res = res >> 1;				// 우측 1비트 쉬프트
	printf("res: %x\n", res);	// Hex : 1e = 30
	res = n << 2;				// 좌측 2비트 쉬프트
	printf("res: %x\n", res);	// Hex : 78 = 120
	
	int n2 = 143;				// 0b 1000 1111
	res = n2 << 1;				// 0b 1 0001 1110
	printf("res : %x\n", res);
	res = n2 >> 1;				// 0b  100 0111 > 부호비트 1이므로 1로 채워짐
	printf("res : %x\n", res);
	
	return 0;
}