/*
*	객체 동적 생성
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	int value;
	// MyClass() {};
	MyClass(int v = 0) : value(v) {			// 콜론 초기화 및 1-1. dafault 생성자 (int v = 0)
	}
	void showMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {
	MyClass* ptr = new MyClass{ 10 };
	ptr->showMyClass();						// 애로우 연산자 사용하여 데이터 바로 접근 가능
	printf("value: %d\n", ptr->value);

	delete ptr;

	MyClass obj{};							// 1. default 생성자 생성
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();					// (*ptr) 역참조에서 괄호가 있어야 함
	printf("value: %d\n", ptr->value);

	return 0;
}