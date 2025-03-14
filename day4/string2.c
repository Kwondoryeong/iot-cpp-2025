/*
	문자열 상수는 주소이다
*/
#include <stdio.h>

int main(void) {
	char* ps = "orange";					// 포인터변수 ps는 orange 시작주소 o
	printf("ps가 가리키는 값: %s\n", ps);	// ps 출력 > orange
	ps = "apple";							// ps가 가리키고 있는 값 apple 변경
	printf("ps가 가리키는 값: %s\n", ps);	// apple

	return 0;
}