/*
	배열 포인터 : 배열을 가리키는 포인터
				: 일반 변수를 가키리는 포인터 자료형이 다르기 때문에 다르게 표현
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void printAry(char**, int);

int main() {
	//int a = 10;
	//int* pa = &a;			
	//
	//int ary[] = { 1, 2, 3 };
	//int(* pary) = ary;

	int ary[3][4] = { {1,2,3,4,}, {5,6,7,8}, {9,10,11,12} };		// 2차원 배열
	////int** pary = ary;											// 2차원 배열을 가리키는 포인터가 아닌 이중 포인터
	//int(*pary)[4];												// int형 변수 4개 배열을 가리키는 배열 포인터
	//// int* pary[4];												// int형 주소 4개 저장 가능한 포인터 배열

	//pary[0] = ary;
	//printf("pary[] : %d\t", pary[0]);
	
	// 사용법
	int (*pary)[4];
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d", pary[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//										// 1차원 배열도 열
//int ary[][2] = { {1,2}, {3,4} };		// 행을 생략되도 되지만 열은 생략되면 안됨

