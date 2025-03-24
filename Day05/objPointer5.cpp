/*
*	상속에서 객체 포인터:
*	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 됨
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
	Base* bptr = nullptr;		// Base class type
	Derived* dptr = nullptr;	

	Derived obj;				// 파생클래스 객체 생성 Drived class type
	dptr = &obj;
	dptr->show();
								// 포인터와 객체중 객체가 중요함 자식타입의 객체가 부모포인터
	bptr = &obj;				// 부모타입의 포인터로 자식타입의 객체를 가리킨다 (Upcasting) 부모는 자식 가리키기 가능
	bptr->show();				// 부모타입의 포인터로 자식타입의 객체를 가리키지만 show 호출시 부모 함수 호출
	//bptr->Derived::show();


	return 0;
}