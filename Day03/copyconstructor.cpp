/*
	copyconstructor(���� ������) - ������ ȣ����� �ʾƵ� ����Ʈ�� ȣ��Ǿ� ��ü�� �����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Person {
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* _name, int _age) {
		printf("Constructor call!!!\n");
		strcpy(m_name, _name);
		m_age = _age;
	}
	void printPerson() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}
};

int main() {
	Person p("ȫ�浿", 30);		// 1. person ������ ȣ���
	p.printPerson();

	Person p2(p);				// 2. ������ ȣ�� ���� �ʾ����� ���� �����ڰ� ȣ��(����Ʈ ȣ��)�Ǿ� ��ü�� �����
	p2.printPerson();

	Person p3 = p;				// 3. ���� ������ ȣ��Ǿ� ��ü ����!
	p3.printPerson();

	return 0;
}