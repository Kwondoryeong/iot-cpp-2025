/*
	배열이름은 포인터
*/
#include<stdio.h>

void printAry(int*, int);

int main(void) {
	int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(ary) / sizeof(ary[0]);
	printf("size : %d", size);
	printAry(ary, size);

	return 0;
}

void printAry(int *p, int _size) {
	int i;
	for (i = 0; i < _size; i++) {
		printf("ary[%d] = %d\n", i, p[i]);
	}
}