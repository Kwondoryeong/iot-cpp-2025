/*
* 
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
class Derived : public Base {		// ��ӿ��� �������̵�(������)
public:
	void show() {
		printf("Derived Class!!\n");
	}
};

int main() {
	Base bobj();
	Derived* dptr = nullptr;			
	// dptr = &bobj;					// �ڽ��� �θ����� x
	/*
	dptr = (Base*)&bobj;
	dptr->show()
	*/
	dptr = (Derived*)&bobj;				// �ڽ�Ŭ���� Ÿ�� �����ͷ� �θ�Ÿ���� �����ͷ� ����� ����ȯ
	dptr->show();						// �ٿ�ĳ������ ����� ���� ���� ����
										// ��ü�����ͷ� ��ü ���� �� �Ϲ������� �θ� �����ͷ� �ڽ� ��ü ����(��ĳ����)
	return 0;
}