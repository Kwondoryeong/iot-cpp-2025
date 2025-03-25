/*
*	weak_ptr : 레퍼런스 카운트에 영향을 주지않는 스마트 포인터
*/
#include <iostream>

using namespace std;

class MyClass {
	MyClass() { cout << "MyClass constructor!!" << endl; }
	~MyClass() { cout << "MyClass destructor: " << endl; }
	void func() { cout << "Hi shared_ptr" << endl; }
};

int main() {
	shared_ptr<MyClass> ptr = make_shared <MyClass>();	// c++ 14이후부터 지원
	weak_ptr<MyClass> weakPtr = ptr;

	// weak_ptr은 순환참조를 방지한다.
	shared_ptr<MyClass> ptr2 = weakPtr.lock();			// weak_ptr에서 shared_ptr 변환
	if (ptr2) { 
		cout << "weak_ptr로 변환한 shared_ptr 사용가능" << endl; 
	}

	return 0;
}