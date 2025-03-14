/*
	myStrCopy() 문자열 복사 함수
	myStrCopy(char, char); // 원본, 복사본
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void myStrCopy(char*, char*, int);

int main() {
	char str[100] = "";
	char str_cp[100] = "";
	int size = sizeof(str) / sizeof(str[0]);

	printf("문자열을 입력하세요 > ");
	gets(str);
	myStrCopy(str, str_cp, size);

	printf("원본 : %s\n", str);
	printf("복사본 : %s\n", str_cp);

	return 0;
}

void myStrCopy(char* _str, char* _str_cp, int size) {
	int i = 0;
	
	while (1) {
		if ((_str[i] == '\n') || i >= (size - 1)) {
			break;
		}
		else {
			_str_cp[i] = _str[i];
		}
		i++;
	}
	_str[i] = '\0';
}
