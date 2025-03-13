#include<stdio.h>

int main() {
	int num = 10;

	if (num > 10 || num < 10) {
		printf("거짓입니다.");
	}
	else if (num == 10) {
		printf("num은 %d입니다.", num);
	}
	else {
		printf("참입니다.");
	}
	return 0;
}