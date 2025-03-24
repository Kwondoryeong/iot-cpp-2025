/*
*	������ �����ε�(��������) : ������, �Լ� �����ε� ������ ��ǥ���
	> C�� �Լ��̸������� ���� C++�� �Լ��̸�+�Ű����� ����Ÿ���� �Լ����� ���ؿ� ���� ����
*	������ �������̵�(������) : 
*	
*/
#include <iostream>

using namespace std;

class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) { }
	void showMyClass() {
		cout << m_a << ", " << m_b << ", " << m_name << endl;
	}
};

int main() {
	MyClass obj{ 1, 2, "ȫ�浿" }; // �߰�ȣ �ʱ�ȭ
	obj.showMyClass();

	MyClass obj2;
	// ���°� �� �ٸ� ����� ���� ��ü�� �Ϲ����� int, char���� �ٸ��� ���Կ����ڷ� ��ü�� ����, �����Ǵ���?
	obj2 = obj;					// > ������ �����ε� ����!! ��� ������ �����ؼ� obj2 ��ü�� ������, ����Ʈ ���� ������ ����
	obj2.showMyClass();

	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	MyClass obj3 = obj + obj2;	// ��ü + ��ü ���� ����� �ڷ����� ���ϴ� �����ڰ� ����
								// > + �����ڿ� ���� �����ε��� ���� ���� ����!


	return 0;
}
