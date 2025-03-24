/*
*	객체 동적 생성 : 타임(실행 시간)에 new 연산자를 사용하여 객체를 생성하는 것을 의미합니다.
이 방식은 프로그램이 실행될 때 필요한 만큼 객체를 생성하고, 필요하지 않을 때 삭제하여 메모리를 효율적으로 관리할 수 있도록 합니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class AClass {
public:
	void showAClass() {
		cout << "Dynamically created object" << endl;
	}
private:

};
int main() {
	AClass* ptr = new AClass{ };		// 권장, 동적 할당, 런타임 시 객체 생성 
	// AClass* ptr1 = new AClass;		// OK
	// AClass* ptr2 = new AClass();		// OK
	ptr->showAClass();

	delete ptr;						// 동적 메모리 해제

	return 0;
}