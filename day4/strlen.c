/*
	strlen - 문자열 길이를 계산
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "apple";
	
	printf("str 문자열 길이: %d", strlen(str)); // 널문자 카운트X

	return 0;
}