/*
	cout - 출력을 담당하는 객체
*/
#include <iostream>
using namespace std;

int main(void) {
	int num = 100;		// C 스타일 변수 선언
	int num2(200);		// C++ 스타일 변수 선언
						// int형 num2 객체생성 200으로 초기화, 함수호출과 헷갈리기 때문에 미사용

	std::cout << num << std::endl;
	cout << num2 << endl;


	return 0;
}