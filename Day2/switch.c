#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// switch(조건식) ~ case:
int main(void) {
	int num = 10;
	int n = 0;
	/*int answer;
	srand(time(NULL));
	int random = rand() % 5 + 1;*/
	printf("##### 숫자 맞추기 게임 #####\n");
	printf("정수를 입력하세요(1 ~ 5) : ");
	// scanf_s("%d", &num);
//	while (1) {
		switch (num) {
		case 5:
			printf("빙고");
			break;				// 반복문을 벗어난다.
		case 4:
			printf("작음");
			break;
		case 3:
			printf("큼");
			break;
		default:
			printf("이것도 저것도 아님");
			break;
		}
//	}

	return 0;
}

