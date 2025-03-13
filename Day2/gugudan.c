/* */
#include<stdio.h>

int main(void) {
	int i, j;
	int n=1;
	for (i = 2; i <= 9; i++) {
		printf("%d단\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %2d ", i, j, i * j);
		}
		printf("\n");
	}

	while(n){
		printf("출력할 구구단 단수 입력(종료 : '0') > ");
		scanf_s("%d", &n);
		if (n == 0) {
			break;
		}
		else if (2 <= n && n <= 9) {
			printf("--- %d단 ---\n", n);
			for (i = 1; i <= 9; i++) {
				printf("%d x %d = %2d\n", n, i, n * i);
			}
		}
		else {
			n = 0;
		}
	}
	return 0;
}