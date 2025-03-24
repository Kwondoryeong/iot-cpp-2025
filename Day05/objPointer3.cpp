/*
*	��ü ���� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	int value;
	// MyClass() {};
	MyClass(int v = 0) : value(v) {			// �ݷ� �ʱ�ȭ �� 1-1. dafault ������ (int v = 0)
	}
	void showMyClass() {
		cout << "value: " << value << endl;
	}
};
int main() {
	MyClass* ptr = new MyClass{ 10 };
	ptr->showMyClass();						// �ַο� ������ ����Ͽ� ������ �ٷ� ���� ����
	printf("value: %d\n", ptr->value);

	delete ptr;

	MyClass obj{};							// 1. default ������ ����
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();					// (*ptr) ���������� ��ȣ�� �־�� ��
	printf("value: %d\n", ptr->value);

	return 0;
}