/*
	strcpy - 문자열 복사
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "orange";
	char str2[100] = "apple";
	char* ps = "apple";

	printf("str: %s\n", str);
	printf("str2: %s\n", str);

	strcpy(str, str2);			// strcpy(원본, 복사) > str에 str2 복사 
	puts(str);
	puts(str2);

	strcpy(str, "banana");
	printf("str: %s\n", str);

	strcpy(str, ps);
	printf("str: %s\n", str);

	//strcpy(ps, str2);			// ps 문자열 주소가 아닌 주소를 가리키는 포인터
	//printf("ps: %s\n", str);

	strncpy(str, "abcd", 3);		// 시작주소부터 복사할 문자갯수를 설정할 수 있다.
	printf("strncpy(str, str2, 3): %s", str);

	

	return 0;
}