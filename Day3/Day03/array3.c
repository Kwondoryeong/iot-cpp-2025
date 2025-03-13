#include<stdio.h>
#include<string.h>

int main(void) {
	int num_ary[5] = { 0, };
	int i = 0;
	int sum = 0, avg = 0;
	int arr_len = 0;
	int size = sizeof(num_ary) / sizeof(num_ary[0]);

	/*
	while (1) {
		if (num_ary[i] == 0) {
			i++;
			arr_len++;
		}
		else
			break;
	}
	*/
	// printf("arr_len : %d\n", arr_len);
	printf("5명의 성적을 입력하세요 : ");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &num_ary[i]);
		sum += num_ary[i];
	}
	avg = sum / size;
	printf("성적의 총합 : %d\n", sum);
	printf("성적의 평균 : %d", avg);

	return 0;
}