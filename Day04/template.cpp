/*
*	함수 템플릿 : 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용한다.
*	다형성과 재활용
*/

#include<iostream>

using namespace std;

//int Add(int a, int b) {
//	return a + b;
//}
//double Add(double a, double b) {
//	return a + b;
//}
template <typename T>
T Add(T a, T b) {
	return a + b;
}
int main() {
	std::cout << Add(10, 20) << std::endl;			// int Add()
	std::cout << Add(1.1, 2.2) << std::endl;		// double Add()

	return 0;
}
