/* */
#include<stdio.h>

int main(void) {
	int i = 0;
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) continue; // continue �Ʒ� �ǳʶ�(¦��)
		if (i >= 7) break;
		printf("%d\n", i);
	}
	return 0;
}