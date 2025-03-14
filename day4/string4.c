/*
	puts, fputs - 전용 출력 함수
	stdout : 표준 출력 버퍼(스트림)
*/
#include <stdio.h>

int main() {
	char str[100] = "Delmonte orange";
	char* ps = "banana";

	printf("%s\n", str);		// 서식문자에 따라 여러 자료형 출력가능, 무거움
	puts(str);					// 문자열 전용, 가벼움, 자동개행
	fputs(str, stdout);			// fputs는 크기 작성 미필요, 개행안됨
	puts(ps);
	fputs(ps, stdout);

	return 0;
}