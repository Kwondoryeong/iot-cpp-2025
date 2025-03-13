/* 배열 */
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int ary[5] = { 1, 2, 3, 4, 5 };		// 정수형 배열 선언, 크기 20byte int-4byte 5개
	int ary2[] = { 6, 7, 8, 9, 10 };	// 초기화를 바로 해주는 경우 size 없어도 됨. 자동으로 컴파일러가 20byte 크기 배열 생성
	int ary3[5];						// 쓰레기값 들어있음
	// int ary3[5] = { 0 };				// 0으로 초기화 0 0 0 0 0
	// int ary4[];	

	printf("sizeof(int ary[5]) : %d\n", (int unsigned)sizeof(ary));
	for (int i = 0; i < 5; i++) {
		printf("ary[%d]: %d\t", i, ary[i]);
		printf("ary2[%d]: %d\n", i, ary2[i]);
	}
	ary[2] = 100;
	printf("ary[2]:%d", ary[2]);
	return 0;
}