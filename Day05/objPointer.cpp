/*
* 객체 포인터(Object Point) : 클래스(또는 구조체)의 객체를 가리키는 포인터 
* 객체의 주소를 저장하고, 해당 주소를 통해 객체의 멤버(변수, 함수)에 접근할 수 있음
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	void showMyClass() {
		cout << "Hello World!!" << endl;
	}
private:

};

int main() {
	MyClass obj;
	MyClass* ptr;		// MyClass 타입의 객체 포인터 선언
	ptr = &obj;

	ptr->showMyClass();

	return 0;
}