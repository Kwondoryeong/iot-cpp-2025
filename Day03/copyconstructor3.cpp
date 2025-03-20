/*
	(deep copy)��������� - name�� ���� �Ҵ� �޴� copyconstructor2 �ڵ�
	- �޸� ���� �Ҵ� ���� ��� �����ϴ� ��ü�� ���� �Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		cout << "������ ȣ��!" << endl;
		this->name = new char[strlen(name) + 1];						// �����Ҵ�
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& other) {										// ���� �����ڿ��� �׳� �����ϸ� ���� ����(������ ī��)
		cout << "���� ������!" << endl;									// ���� �����ڿ����� ���� �Ҵ� �ϸ� ���� ����(�� ī��)
		this->age = other.age;											// ���� ����� �����ϰ� �ִ� ��ü�� �Ҹ� �Ǹ� �� �޸𸮰��� �����
		this->name = new char[strlen(other.name) + 1];					// �������� �ʴ� �� ������ ����Ű�� �� -> ���� ����� �ذ�!
		strncpy(this->name, other.name, strlen(other.name) + 1);		// ���ο� �� ������ �Ҵ�޾Ƽ� ����																		
	}
	~Person() {
		delete[] this->name;
	}
	void printPerson() {
		cout << "�̸�: " << this->name << ", ����: " << this->age << endl;
		cout << "sizeof(name): " << sizeof(this->name) << endl;
	}
};

int main() {
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}

/*
	����Ʈ�� �ڵ����� �����޴� ������ : ����Ʈ ������, ���� ������, �Ҹ���, 
*/