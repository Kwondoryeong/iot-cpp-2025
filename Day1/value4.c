/* 배열 
	동일한 자료형을 연속적으로 저장할 수 있는 공간
*/
#include<stdio.h>

int main(void) {
	char str[10] = "banana";		// 문자타입 배열선언

	printf("str : %s\n", str);		
	
	printf("str[0] : %c\n", str[0]);
	printf("str[6] : char> %c\n", str[6]);
	// printf("str[6] : str > %s\n", str[6]);	// 문자열 끝에는 널문자

	char str2[6] = "apple";
	printf("str2 : %s\n", str2);
	str[0] = 'A';
	printf("str2 : %s\n", str2);

	return 0;
}