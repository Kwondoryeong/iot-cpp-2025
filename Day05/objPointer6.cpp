/*
* 
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Base {
public:
	void show() {
		printf("Base Class!!\n");
	}
};
class Derived : public Base {		// 상속에서 오버라이딩(재정의)
public:
	void show() {
		printf("Derived Class!!\n");
	}
};

int main() {
	Base bobj();
	Derived* dptr = nullptr;			
	// dptr = &bobj;					// 자식이 부모한테 x
	/*
	dptr = (Base*)&bobj;
	dptr->show()
	*/
	dptr = (Derived*)&bobj;				// 자식클래스 타입 포인터로 부모타입의 포인터로 명시적 형변환
	dptr->show();						// 다운캐스팅은 사용할 일이 별로 없음
										// 객체포인터로 객체 접근 시 일반적으로 부모 포인터로 자식 객체 접근(업캐스팅)
	return 0;
}