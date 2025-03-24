/*
	템플릿 매개변수 2개인 경우
*/
#include <iostream>

using namespace std;

template <typename T, typename T2>
void func(T a, T2 b) {			// a : lhs b : rhs
	cout << a << endl;
	cout << b << endl;
}

int main() {
	func(10, 3.14);			// a, b 타입이 다른 경우 
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.1415);

	return 0;
}