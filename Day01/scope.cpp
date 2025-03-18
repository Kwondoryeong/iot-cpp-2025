/*
*	#include "a.h" 만든 헤더파일 추가
*	:: > 범위지정 연산자로 범위지정해야 외부 클래스 사용가능
*/

#include <iostream>
#include "scope.h"

A::A(int aa) {		// :: 범위지정 연산자
	a = aa;
}
void A::AInfo(){								// 연산자 A클래스 안에 있는 AInfo라는 메서드
	std::cout << "a: " << a << std::endl;
}

int main() {
	A a(10);
	a.AInfo();

	return 0;
}