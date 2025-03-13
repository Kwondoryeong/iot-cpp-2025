#include<stdio.h>

int main(void) {
	int ary[5] = { 1, 2, 3, 4, 5 };			// 정수형 배열 선언 및 초기화

	printf("ary[0] : %d\n", ary[0]);
	ary[3] = 400;
	printf("ary[3] : %d\n", ary[3]);
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("ary[%d] : %d\n", i, ary[i]);
	}

	return 0;
}