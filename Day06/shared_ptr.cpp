/*
	shared_ptr
	make_shared: ��ü�� ���� ī��Ʈ�� �ϳ��� �޸𸮺�Ͽ� ���� �Ҵ��Ų��. shared_ptr�� �����ϴ� �Լ�
	shared_ptr�� ���� ī��Ʈ�� ���� ��ü�� �������� �����Ѵ�.
	�������� shared_ptr�� ��ü�� ������ �� ������
	���۷��� ī��Ʈ�� 0�̵Ǹ� �޸𸮰� �ڵ� �����ȴ�.
*/
#include <iostream>

using namespace std;

class MyClass {
public:
	MyClass() { cout << "MyClass constructor!!" << endl; }
	~MyClass() { cout << "MyClass destructor!!: " << endl; }
	void func() { cout << "Hi shared_ptr" << endl; }
};
int main() {
	shared_ptr<MyClass> ptr = make_shared<MyClass>();
	shared_ptr<MyClass> ptr2 = ptr;
	printf("ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�.\n");

	return 0;
}