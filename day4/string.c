/*
	문자열 : 문자열이 시작되는 시작주소
	메모리 : 코드세그먼트 > 함수, 명령어 저장
			 데이터세그먼트 > 전역변수, 스택, 지역변수(스택영역), 메모리동적할당(힙영역)
*/
#include<stdio.h>

int main(void) {
	char str[100] = "orange";			// 

	printf("%s\n", str);
	printf("문자열 : %s\n", "orange");	// 데이터 영역, ""로 묶은 문자열 데이터 영역에 저장
	printf("주소값 : %p\n", "orange");	// 주소가 출력되면 메모리에 저장이 되어있음
	printf("%c\n", *"orange");			// 'o', * > 간접참조연산
	printf("%c\n", *("orange" + 1));	// 'r'
	printf("%c\n", "orange"[2]);		// 'a', 문자열 상수 배열로 확인

	// "orange"[0] = '0';
	*"orange" = 'O';					// 상수이기 때문에 값변경 불가
	printf("%s\n", str);

	return 0;
}