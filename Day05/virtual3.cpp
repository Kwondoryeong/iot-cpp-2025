/*
*	추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생.
*	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다.
*	객체 생성 시 부모 생성자가 먼저 실행되며, 소멸자는 자식부터 실행됨.
*	virtual이 선언된 함수는 부모 포인터(CTest*)를 통해 호출하면 자식의 오버라이딩된 함수가 실행됨.
*	부모 클래스의 소멸자는 virtual로 선언하지 않으면 동적 할당된 객체를 delete할 때 자식의 소멸자가 호출되지 않을 수 있음.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int anum) : num(anum) {
		cout << num << " CTest Constructor" << endl; }
	~CTest() { cout << num << " CTest destoructor" << endl; }
	virtual void vfunc() { cout << "CTest virtual function()" << endl;	}
	void func() { cout << "CTest function()" << endl;	}
};
class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTest constructor" << endl; }
	~CTestSub() {
		cout << subN << " CTestSub destructor" << endl;	}
	
	virtual void vfunc() {
		cout << "CTestSub function() override" << endl;	}
	void func() { 
		cout << "CTest function()" << endl; }
};
int main() {
	CTest obj(1);
	cout << "================================" << endl;
	CTestSub obj2(2, 22);		// 자식클래스 생성하기 위해 부모클래스 생성자 실행 후 돌아와서 자식클래스 생성자 실행
	cout << "================================" << endl;
	obj.func();
	obj.vfunc();
	cout << "================================" << endl;
	obj2.func();
	obj2.vfunc();

	CTest* ptr = new CTestSub(3, 33);

	delete ptr;
	return 0;
}