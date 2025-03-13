#include<stdio.h>

int main(void) {
	int i = 0;
	int sum = 0;
	while (i < 5) {
		printf("안녕하세요. %d\n", i + 1);
		i++;
	}

	i = 0;
	while (i < 100) {
		i++;
		sum += i;	
	}
	printf("1 ~ %d까지 합 : %d\n", i, sum);
	return 0;
}