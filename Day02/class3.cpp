/*
	������constructor >	��ü�� �����ϸ鼭 �ʱⰪ �Բ� �ֱ�
	- ������ ȣ��� ��ü�� ���������.
	- ��ü ������ ������ �´� �����ڰ� ������ ��ü�� �������� �ʴ´�.
	- �����ڴ� �ʱ�ȭ��ɿ� ����Ѵ�.
	- �����ڴ� �����ε��� �����ϴ�.
	- �����ڸ� �ۼ��ϸ� �� �̻� ����Ʈ �����ڴ� �������� �ʴ´�.
	- �Ҹ��ڴ� �⺻ �����ڿ� ~ ���̱�
*/

#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
	int m_num;
public:
	MyClass() {						// 2. ������ �����ε� �Ǳ� ������ �Է°� ���� �⺻ ������ ����

	}
	MyClass(int num) {
		m_num = num;
	}
	~MyClass() {}					// 3. �Ҹ��ڴ� �⺻ �����ڿ� ~���̱�
	MyClass(int num1, int num2) {	// 1. ������ > �Է°� �޴� �Լ������
		m_num1 = num1;
		m_num2 = num2;
	}

	void printData() {
		cout << "���� MyClass�� �ν��Ͻ� �Դϴ� " << endl;
		cout << "m_num1: " << m_num1 << "\nm_num2: " << m_num2 << "\nm_num: " << m_num << endl;
	}
};

int main() {
	MyClass obj;				// 2-1.�Է°� 2�� �޴� ������ ���� �� ��� �Ұ��� �⺻ ������ ���� �� ��� ����
	MyClass obj2(100, 200);		// 1-1.�ʱⰪ 2�� �޾� ������
	MyClass obj3(11);			// �ʱⰪ 1�� �޴� ������
	obj2.printData();
	obj3.printData();

	return 0;
}