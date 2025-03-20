/*
*	������� private
*	static ����ϰ� �Ǹ� static ������ �� �� ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class StaticTest {	
private:
	static int static_a;			// static ��� ����, �ڵ� ���׸�Ʈ�� �������, ����Լ� ����ǰ�
	int n;							// obj1, obj2 ���� ��ü�� ������
public:
	StaticTest(int n);
	static void setStatic_a(int a);	// static ��� �Լ�
	void print();
};

int StaticTest::static_a = 100;		// StaticTest Ŭ������ ���� �������

StaticTest::StaticTest(int n){
	this->n = n;					// ���� ��ü�� ������� n�� ����Ŵ
}
void StaticTest::print() {
	printf("static_a: %4d, n: %4d\n", static_a, n);
}
using namespace std;

void StaticTest::setStatic_a(int a) {
	static_a = 50;
	// n = 0;						// �Ϲ� ����� ������ ������ �ʴ´�. static ����� ��븸 �����ϴ�.
}

int main(void) {
	StaticTest obj1(10), obj2(20);
	obj1.print();
	obj2.print();

	obj1.setStatic_a(50);			// static_a�� 50���� ���� > ��� ��ü���� static_a �� 50���� ���� 
	obj1.print();					// static_a�� Ŭ���� ��ü�� ���ϴ� �����̱� ����

	return 0;
}