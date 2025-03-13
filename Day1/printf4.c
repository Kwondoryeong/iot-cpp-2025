#include<stdio.h>
#include<stdint.h>

int main(void) {
	__int64 a = 9223372036854775807;
	printf("%lld\n", a);
	printf("char의 크기: %zu 바이트\n", sizeof(char));
	printf("이름 : %s\n", "권도형");
	printf("나이 : %d\n", 30);

	printf("문자 a : %c\n", 'a');
	printf("문자 a : %d\n", 'a');	// 아스키코드
	printf("문자 A : %c\n", 'A');
	printf("문자 A : %d\n", 'A');	

	return 0;
}