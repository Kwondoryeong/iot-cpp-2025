#include<stdio.h>

int main(void) {
	//int num = 0; // 기본값 : signed 예약어 생략
	signed char ch = 0; // -128 ~ 127
	unsigned char ch2 = 0; // 0 ~ 255

	unsigned int num;
	num	= 123456;
	printf("num : %d\n", num);
	num = -1;
	printf("num : %d\n", num);
	printf("num : %u\n", num);

	return 0;
}