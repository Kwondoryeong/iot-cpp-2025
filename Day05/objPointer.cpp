/*
* ��ü ������(Object Point) : Ŭ����(�Ǵ� ����ü)�� ��ü�� ����Ű�� ������ 
* ��ü�� �ּҸ� �����ϰ�, �ش� �ּҸ� ���� ��ü�� ���(����, �Լ�)�� ������ �� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class MyClass {
public:
	void showMyClass() {
		cout << "Hello World!!" << endl;
	}
private:

};

int main() {
	MyClass obj;
	MyClass* ptr;		// MyClass Ÿ���� ��ü ������ ����
	ptr = &obj;

	ptr->showMyClass();

	return 0;
}