/*
*	��ӿ��� ��ü ������:
*	�θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���� ��
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
	Base* bptr = nullptr;		// Base class type
	Derived* dptr = nullptr;	

	Derived obj;				// �Ļ�Ŭ���� ��ü ���� Drived class type
	dptr = &obj;
	dptr->show();
								// �����Ϳ� ��ü�� ��ü�� �߿��� �ڽ�Ÿ���� ��ü�� �θ�������
	bptr = &obj;				// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ų�� (Upcasting) �θ�� �ڽ� ����Ű�� ����
	bptr->show();				// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű���� show ȣ��� �θ� �Լ� ȣ��
	//bptr->Derived::show();


	return 0;
}