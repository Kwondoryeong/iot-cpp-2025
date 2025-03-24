/*
*	기본 자료형의 형변환으로 컴파일 타임에 타입을 변환
*	static_cast<type-id>(expression)
*	
*/

#include <iostream>

using namespace std;

int main() {
	char ch;
	int i = 100;
	float f = 3.14;
	double d = 2.345;

	ch = static_cast<char>(i);			// int --> char타입 형변환
	cout << ch << endl;
	ch = (char)i;
	cout << ch << endl;

	d = static_cast<double>(f);
	cout << d << endl;

	i = static_cast<int>(d);		// double타입 int형으로 변환
	cout << i << endl;

	cout << typeid(ch).name() << endl;
	cout << typeid(d).name() << endl;

	return 0;
}