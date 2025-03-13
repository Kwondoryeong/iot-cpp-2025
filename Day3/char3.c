/*
	문자 하나 입력 받기
	대소문자 변환 프로그램
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

char trans(char);
void v_trans(char);

int main(void) {
	char ch;
	printf("대소문자 변환 프로그램\n");
	while (1) {
		printf("문자 하나를 입력하세요(종료 : '0') > ");
		ch = getchar();
		//scanf(" %c", &ch);
		printf("입력 값 : %c\n", ch);
		
		//printf("변환 값 : %c\n", trans(ch));
		if (ch == '0') {
			printf("프로그램 종료!\n");
			break;
		}
		v_trans(ch);
		while (getchar() != '\n');
	}
	return 0;
}

char trans(char ch) {
	char res = "";
	if ((ch >= 'A') && (ch <= 'Z')) {
		res = ch + 32;
	}
	else if (('a' <= ch) && (ch <= 'z')){
		res = ch - 32;
	}
	else {
		printf("영문자가 아닙니다!");
	}
	return res;
}

void v_trans(char ch) {
	char res = "";
	if ((ch >= 'A') && (ch <= 'Z')) {
		res = ch + 32;
		printf("변환 값 : %c\n", res);
	}
	else if (('a' <= ch) && (ch <= 'z')) {
		res = ch - 32;
		printf("변환 값 : %c\n", res);
	}
	else {
		printf("영문자가 아닙니다!\n");
	}
	
}