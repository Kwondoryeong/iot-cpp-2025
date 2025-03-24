/*
*	매크로 함수
*/
#include <iostream>
									// 매크로 함수
#define ADD(a,b)	  #a "+" #b		// #이 붙으면 컴파일러가 아닌 전처리기가 처리
#define PI			  3.14			// 간단한 것들 매크로 함수로 사용시
#define MSG(x, y, z)  x ## y ## z	// 전처리기가 처리하기 때문에 속도가 빠름

int main() {
	printf("ADD(a, b): %s\n", ADD(10, 20));
	printf("MSG(x, y, z): %s\n", MSG("macro", "operator+", "test"));


	return 0;
}