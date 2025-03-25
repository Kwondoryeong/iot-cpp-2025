/*
	����Ʈ ������: unique_ptr 
	��ü�� ���� �ֱ⸦ ��ü�� �ñ����� ���α׷����� �޸� ���� �δ��� �ٿ��ش�.
	> �޸� ���� �Ҵ� �ڵ� ����
	unique_ptr - �������� ���������� �����ϴ� ����Ʈ ������(auto_ptr�� ��ü)
*/
#include <iostream>

using namespace std;
class MyClass {
public:
	MyClass() {
		cout << "MyClass() ȣ��" << endl;
	}
	~MyClass() {
		cout << "~MyClass() ȣ��" << endl;
	}
};
int main() {
	unique_ptr<MyClass> ptr(new MyClass{});		// ����Ʈ ������ �޸� �ڵ� ���� new-(delete x)	
	unique_ptr<MyClass> ptr2 = move(ptr);


	return 0;
}
