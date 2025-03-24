/*
*	virtual Class - ���� �����ڸ� ������ �޼��带 ���� ���� �Լ��� �ϸ�, �� ���� ���� �Լ��� ������ Ŭ����
*	�߻�Ŭ������ ��ü�� ������ �� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Cinterface {
public:
	Cinterface() {			// �߻�Ŭ���� - ��ü ������ �� ����
		cout << "CInterface constructor" << endl;	// 
	}
	virtual void getData() const = 0;			// ���� ���� �Լ� - �޼��� ��ü�� ������ �� ����
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