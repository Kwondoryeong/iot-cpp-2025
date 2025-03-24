/*
*	virtual function : 파생 클래스에서 재정의할 것을 약속받은 멤버 함수
*	virtual 키워드를 사용하여 만든다.
*	virtual table이 만들어지고, dynamic binding으로 동작한다.
*	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한됨
*	이때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 됨
*	이것은 컴파일시 포인터형으로 바인딩 되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서
*	바인딩할 함수를 결정한다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }		// 가상함수로 만듬
	virtual void func2() { cout << "B::func2()" << endl; }		// 가상함수로 만듬
	void func3() { cout << "B::func3()" << endl; }				// 가상함수가 아니므로 부모 호출
};
class Derived : public Base {
	void func1() override { cout << "D::func1()" << endl; }		// 가상함수를 재정의하는 멤버함수를 나타냄.
	void func3() { cout << "B::func3()" << endl; }				// 
	void func4() { cout << "B::func4()" << endl; }				// 

};
int main() {
	Base b;			// Base 객체
	Derived d;		// Derived 객체
	Base* bptr = new Derived();									// Upcasting

	bptr->func1();			// base클래스의 func1() 은 가상함수로 선언되어 Derived 클래스의 func1() 호출됨		// 26의 동적할당된 주소 저장
	bptr->func2();			// base클래스의 func2() 은 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않았다.
	bptr->func3();			// 포인터 타입의 호출 함수가 결정된다. base클래스의 func3()

	//bptr->func4();			// func4 는 접근 불가
	delete bptr;
	bptr = &b;
	bptr->func1();
	bptr->func2();
	bptr->func3();

	return 0;
}
/*
*	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 
*	접근은 기초 클래스 멤버로 제한된다
*/