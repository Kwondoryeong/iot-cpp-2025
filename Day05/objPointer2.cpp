/*
*	��ü ���� ���� : Ÿ��(���� �ð�)�� new �����ڸ� ����Ͽ� ��ü�� �����ϴ� ���� �ǹ��մϴ�.
�� ����� ���α׷��� ����� �� �ʿ��� ��ŭ ��ü�� �����ϰ�, �ʿ����� ���� �� �����Ͽ� �޸𸮸� ȿ�������� ������ �� �ֵ��� �մϴ�.
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
	AClass* ptr = new AClass{ };		// ����, ���� �Ҵ�, ��Ÿ�� �� ��ü ���� 
	// AClass* ptr1 = new AClass;		// OK
	// AClass* ptr2 = new AClass();		// OK
	ptr->showAClass();

	delete ptr;						// ���� �޸� ����

	return 0;
}