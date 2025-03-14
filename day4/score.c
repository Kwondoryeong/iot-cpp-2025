/*
	2차원 배열
	4명 입력 국영수 학생별 총점, 평균 구하기
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score[4][3] = { 0 };
	int sum[5] = { 0 };
	double avg[5] = { 0.0 };
	int x = sizeof(score) / sizeof(score[0]);
	int y = sizeof(score[0]) / sizeof(score[0][0]);
	// printf("x : %d, y : %d\n", x, y);
	printf("4명의 국어, 영어, 수학 점수를 입력하세요\n");
	for (int i = 0; i < x; i++) {
		printf("%d번 학생 점수 입력 > ", i + 1);
		for (int j = 0; j < y; j++) {
			scanf_s("%d", &score[i][j]);
			sum[i] += score[i][j];
		}
		avg[i] = sum[i];
		avg[i] /= (double)y;

		printf("avg : %.1lf\n", avg[i]);
		printf("%d명 점수 입력 완료\n", i+1);
	}

	for (int i = 0; i < 4; i++) {
		printf("%d번 학생 국영수 점수 합계 : %d\t 평균 : %.1lf\n", i+1, sum[i], avg[i]);
	}



	return 0;
}
