/*
	이중 포인터
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 100;
	int* pn;
	int** ppn;			// 2중 포인터

	pn = &n;			// 변수 n의 주소를 저장
	ppn = &pn;			// 포인터 변수 pn의 주소를 저장하는 이중 포인터

	printf("n  : %16d\t n주소   : %p\n", n, &n);
	printf("pn : %16p\t pn주소  : %p\t *pn값  : %d\n", pn, &pn, *pn);
	printf("ppn: %16p\t ppn주소 : %p\t *ppn값 : %p\t **ppn값: %d\n", ppn, &ppn, *ppn, **ppn); // *ppn 값 > pn값 **ppn 값 > n의 값

	return 0;
}