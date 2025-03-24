/*
*	virtual function : �Ļ� Ŭ�������� �������� ���� ��ӹ��� ��� �Լ�
*	virtual Ű���带 ����Ͽ� �����.
*	virtual table�� ���������, dynamic binding���� �����Ѵ�.
*	��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ������ ���� Ŭ���� ����� ���ѵ�
*	�̶� �������̵��� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ��� ���� Ŭ������ ��� �Լ��� �����Լ��� ����� ��
*	�̰��� �����Ͻ� ������������ ���ε� ���� ���ϰ� ��Ÿ�ӿ��� �����Ͱ� � ��ü�� ����Ű�� �ִ����� ����
*	���ε��� �Լ��� �����Ѵ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;
class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }		// �����Լ��� ����
	virtual void func2() { cout << "B::func2()" << endl; }		// �����Լ��� ����
	void func3() { cout << "B::func3()" << endl; }				// �����Լ��� �ƴϹǷ� �θ� ȣ��
};
class Derived : public Base {
	void func1() override { cout << "D::func1()" << endl; }		// �����Լ��� �������ϴ� ����Լ��� ��Ÿ��.
	void func3() { cout << "B::func3()" << endl; }				// 
	void func4() { cout << "B::func4()" << endl; }				// 

};
int main() {
	Base b;			// Base ��ü
	Derived d;		// Derived ��ü
	Base* bptr = new Derived();									// Upcasting

	bptr->func1();			// baseŬ������ func1() �� �����Լ��� ����Ǿ� Derived Ŭ������ func1() ȣ���		// 26�� �����Ҵ�� �ּ� ����
	bptr->func2();			// baseŬ������ func2() �� �����Լ��� ����Ǿ����� �������̵�(������)�� ���� �ʾҴ�.
	bptr->func3();			// ������ Ÿ���� ȣ�� �Լ��� �����ȴ�. baseŬ������ func3()

	//bptr->func4();			// func4 �� ���� �Ұ�
	delete bptr;
	bptr = &b;
	bptr->func1();
	bptr->func2();
	bptr->func3();

	return 0;
}
/*
*	��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� 
*	������ ���� Ŭ���� ����� ���ѵȴ�
*/