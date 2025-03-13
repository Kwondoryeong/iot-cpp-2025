#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int num;
	int res;
	srand(time(NULL));
	int random = rand() % 100 + 1;
	res = random;
	
	printf("##### 숫자 맞추기 게임 #####\n");
	printf("정수를 입력하세요(1 ~ 100) : ");
	scanf_s("%d", &num);
	while (1) {
		if (res == num) {
			printf("[%d] 정답 입니다!!\n", num);
			break;
		}
		else if (res > num) {
			printf("정답은 %d보다 큰 수 입니다.\n", num);
		}
		else {
			printf("정답은 %d보다 작은 수 입니다.\n", num);
		}
		
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);
	}
	return 0;
}