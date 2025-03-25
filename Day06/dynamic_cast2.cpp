/*
*	dynamic_cast를 이용하여 다운캐스팅할 경우는 가상함수가 있어야 한다.
*	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Super {
public:
	virtual void func() { cout << "Super::func()" << endl; }		 
	void func1() { cout << "Super::func1()" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};
class Sub : public Super {
public:
	void func() { cout << "Sub::func()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};

using namespace std;

int main() {
	Super* sp = new Super{};					// 슈퍼타입 동적할당 주소연결
	sp->func();
	sp->func1();
	sp->fx();
	cout << " ======= Upcasting ========" << endl;
	Super* sp2= new Sub{};						// 자식
	sp2->func();
	sp2->func1();
	sp2->fx();
	cout << " ======== downcasting ========" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(sp2);			// 부모 클래스를 자식 클래스로 변환
	sp3->func();
	sp3->func1();
	sp3->func2();
	sp3->fx();

	delete sp;
	delete sp2;

	return 0;
}
