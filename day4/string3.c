/*
	gets, fgets : 문자열 입력 함수(공백 입력 가능)
	stdin - 표준 입력 버퍼(입력 스트림)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[100];

	//printf("문자열 입력 >> ");
	//scanf("%s", str);				// scanf의 경우 공백 못읽음
	//
	//printf("문자열 : %s", str);
	//scanf("%s\n", str);
	//printf("다음 문자열 : %s\n", str);

	/* gets */
	//printf("공백을 포함한 입력 >> ");
	//gets(str);						// gets(입력) 함수는 입력이 필요함
	//printf("입력 문자열 : %s\n", str);
	//printf("문자열 길이 : %d", strlen(str));

	/* fgets */
	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);		// 저장할 버퍼 크기, stdin : 표준입력버퍼, stdin 자리 파일로 파일입출력 가능
	str[strlen(str) - 1] = '\0';		// fgets 경우 데이터 구분 위한 개행문자 입력 받으므로 제거
	printf("입력 문자열 : %s\n", str);


	return 0;
}