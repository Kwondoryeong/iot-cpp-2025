#include<stdio.h>

void insertAry(int, int*, int);

int main(void) {
	int ary[] = { 0,1,2,3,4,5 };
	int n, size;

	size = sizeof(ary) / sizeof(ary[0]);
	printf("값을 입력하세요 > ");
	scanf("%d", &n);

	printf("%d %d %d", ary, size);

	insertAry(ary, n, size);
	
	return 0;
}

void insertAry(int ary, int *n, int size) {
	ary + size

}