/*
	getchar, putchar - 문자 전용 함수
*/
#include<stdio.h>

int main(void) {
	int ch;
	
	ch = getchar();			// 한 문자를 읽어오는 함수
	putchar(ch);			// 한 문자를 출력하는 함수
	putchar('\n');
	printf("input: '%%d'> %d, '%%c'> %c\n", ch, ch);
			

	return 0;
}