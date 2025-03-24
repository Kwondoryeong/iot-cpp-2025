/*
*	ptr을 nullptr로 초기화하고, nullptr인지 확인하여 안전하게 접근.
*	new MyClass{}로 객체를 동적 할당한 후 show() 메서드 호출.
*	"ptr is null"이 먼저 출력되고, 이후 "Hello!!"가 출력됨.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	void show() {
		cout << "Hello!!" << endl;
	}
};

int main() {
	MyClass* ptr = nullptr;					// ptr 타입이 MyClass* 타입으로 %d %p %u 등 출력 불가
	//printf("ptr: %p\n", *ptr);
	if (ptr != nullptr) ptr->show();
	else printf("ptr is null\n");

	ptr = new MyClass{};
	ptr->show();

	return 0;
}

