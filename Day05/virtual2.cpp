/*
*	virtual Class - 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
*	추상클래스는 객체를 생성할 수 없다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Cinterface {
public:
	Cinterface() {			// 추상클래스 - 객체 생성할 수 없음
		cout << "CInterface constructor" << endl;	// 
	}
	virtual void getData() const = 0;			// 순수 가상 함수 - 메서드 몸체를 구현할 수 없음
};

class CinSub : public Cinterface {
public:
	CinSub() {
		cout << "CinSub constructor" << endl;
	}
	void getData() const override {
		cout << "Pure Virtual function()" << endl;
	}
};

int main() {
	//Cinterface obj;
	CinSub obj;
	obj.getData();


	return 0;
}