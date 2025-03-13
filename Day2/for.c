/* for문 */
#include<stdio.h>

int main(void) {
	/* for(초기식: 조건식: 증감식 { }*/
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++) {
		printf("i: %d\n", i);
	}

	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("1 ~ 10까지 합은 %d 입니다.", sum);
	return 0;
}