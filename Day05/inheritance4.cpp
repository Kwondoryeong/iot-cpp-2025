/*
*	상속 관계에서 객체 생성 및 소멸
*	객체를 생성할 때 호출되는 생성자와 생성자의 실행은 다르다.
*	-> 객체를 생성하면 부모 클래스부터 차례대로 생성자가 호출되지만,
	-> 생성자의 실행 순서는 자식 클래스에서 부모 클래스로 진행.
*	SuperClass가 num, SubClass가 subNum을 관리하며, 상속 관계가 있음.
*	객체 생성 시 부모 클래스 생성자가 먼저 실행된 후, 자식 클래스 생성자가 실행됨.
*	객체 소멸 시 자식 클래스 소멸자가 먼저 실행된 후, 부모 클래스 소멸자가 실행됨.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class SuperClass {
private:
	int num;
public:
	SuperClass(int an) {						// 1. 생성자 호출, 2-1.생성자 호출
		num = an;
		cout << num << " SuperClass constructor" << endl;
	}
	~SuperClass(){
		cout << num << " SuperClass Destructor" << endl;	// 5. SubClass 소멸자 호출 6. SuperClass 소멸자 호출
	}
};
class SubClass : public SuperClass {
private:
	int subNum;
public:
	SubClass(int an, int an2) : SuperClass(an){		// 2. SubClass의 SuperClass(an)을 먼저 가서 생성자 호출
		subNum = an2;
		cout << subNum << " SubClass constructor" << endl;	// 3. subClass 생성자 호출
	}
	~SubClass() {
		cout << subNum << " SubClass Destructor" << endl;	// 4. subClass 소멸자 호출
	}
};

int main() {
	SuperClass s{ 1 };
	cout << "======================================" << endl;
	SubClass sub{ 2, 22 };		
	//부모클래스 생성자 호출 > 부모클래스 생성자 호출 > 자식클래스 생성자 호출 > 자식클래스 소멸자 호출 > 부모클래스 소멸자 호출 > 부모클래스 소멸자 호출
	
	
	return 0;
}