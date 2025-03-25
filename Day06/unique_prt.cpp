/*
	스마트 포인터: unique_ptr 
	객체의 생명 주기를 객체에 맡김으로 프로그래머의 메모리 관리 부담을 줄여준다.
	> 메모리 동적 할당 자동 해제
	unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터(auto_ptr을 대체)
*/
#include <iostream>

using namespace std;
class MyClass {
public:
	MyClass() {
		cout << "MyClass() 호출" << endl;
	}
	~MyClass() {
		cout << "~MyClass() 호출" << endl;
	}
};
int main() {
	unique_ptr<MyClass> ptr(new MyClass{});		// 스마트 포인터 메모리 자동 해제 new-(delete x)	
	unique_ptr<MyClass> ptr2 = move(ptr);


	return 0;
}
