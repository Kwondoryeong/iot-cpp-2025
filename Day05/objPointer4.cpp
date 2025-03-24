/*
*	ptr�� nullptr�� �ʱ�ȭ�ϰ�, nullptr���� Ȯ���Ͽ� �����ϰ� ����.
*	new MyClass{}�� ��ü�� ���� �Ҵ��� �� show() �޼��� ȣ��.
*	"ptr is null"�� ���� ��µǰ�, ���� "Hello!!"�� ��µ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	void show() {
		cout << "Hello!!" << endl;
	}
};

int main() {
	MyClass* ptr = nullptr;					// ptr Ÿ���� MyClass* Ÿ������ %d %p %u �� ��� �Ұ�
	//printf("ptr: %p\n", *ptr);
	if (ptr != nullptr) ptr->show();
	else printf("ptr is null\n");

	ptr = new MyClass{};
	ptr->show();

	return 0;
}

