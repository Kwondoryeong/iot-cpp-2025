/*
	copyconstructor(���� ������) - ���� ������ ������
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("constructor call!\n");
		strcpy(this->name, name);			// �̸��� ���� �� this������ ��� : ��ü �ڽ��� ����Ŵ 
		this->age = age;
	}										// 2. p��� ��ü�� ������ �ӽ� ��ü�� ������( 1-1, 2-1 �� ����) 
	Person(const Person& other) {			// ���������, ������� p��� ��ü�� �����ؼ� �Ʒ��� �����ؼ� ����� ����� �����ؼ� ��ü ����
		printf("copy constructor!\n");		// ������ �� ������ ���� �Ǹ� �ȵǱ� ������ *const ���*, �Ű������� ��üŸ���̸� ��������ڰ� ȣ���
		this->age = other.age;				// ��ü�� ������ �ȵ�, *�����ڷ� ����(&)*
		strncpy(this->name, other.name, strlen(other.name) + 1);	// �ι��� ���� ���� + 1
	}
	void printPerson() {
		cout << "�̸�: " << this->name << ", ����" << this->age << endl;
	}
};

int main() {
	Person p("ȫ�浿", 30);	// Person ������ ȣ��
	p.printPerson();

	Person p2(p);			// ���� ������ Person(const Person& other)ȣ�� -> �̷� ������ ���� �����ڰ� ����Ʈ�� ȣ���
	p2.printPerson();		// *�Է��� ��ü��� ������ ������ ����!* ������ ���� ������ ���� �����ڸ� ��� ȣ���ؼ� ���ѷ����� ����
							// ������ �޴� ���� ȿ����
	Person p3 = p;			// 1. p��� ��ü�� ����(���� ������ ȣ���)
	p3.printPerson();		// 


	return 0;
}

void a(int aa) { // 2-1. aa �Ű������� n�� �����ؼ� ���(call by value) ab�� n ���� �������� ����
	aa++;
}

void ab() {
	int n = 10;
	a(n);	// 1-1. a�Լ� ����ã�ư�
}