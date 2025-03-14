/*
	strcmp - 문자열 비교 함수(사전순)
	strcmp(str1, str2) > str1이 사전에서 먼저 검색되면 -1반환, str2가 검색되면 1반환, 같으면 0 반환
	보통 같은지 다른지 비교
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<time.h>

int main(void) {
	char str[100] = "apple";
	char str2[100] = "orange";
	char rd_ch1;
	char rd_ch2;
	srand(time(NULL));
	
	//printf("%c\n", ;
	rd_ch1 = (char)rand() % 26 + 90;
	rd_ch2 = (char)rand() % 26 + 90;
	if (strcmp(rd_ch1 == rd_ch2)) {
		printf("rd_ch1(%c) == rd_ch2(%c) 같습니다 > %d", rd_ch1, rd_ch2, strcmp(rd_ch1 == rd_ch2));
	}
	else if (strcmp(rd_ch1 < rd_ch2)) {
		printf("rd_ch1(%c) < rd_ch2(%c) ch1이 작음(먼저 검색) > %d", rd_ch1, rd_ch2, strcmp(rd_ch1 < rd_ch2));
	}
	else {
		printf("rd_ch1(%c) > rd_ch2(%c) ch1이 큼(나중 검색) > %d", rd_ch1, rd_ch2, strcmp(rd_ch1 > rd_ch2));
	}

	if (strcmp(str, str2) > 0) {		// a가 o보다 사전순으로 빠름
		printf("str: %s\n", str);
	}
	else printf("str2: %s\n", str2);

	printf("%d", strncmp(str, str2, 3));


	return 0;
}
