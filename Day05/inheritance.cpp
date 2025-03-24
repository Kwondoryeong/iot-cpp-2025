/*
*	Inheritance(���) : �θ�(����=����=����=���̽�)Ŭ����, �ڽ�(����=����=�Ļ�=����̹���)Ŭ����
*	private, public, ��Ӱ��� ���� ������ : protected
*	is a(������ �����̴�.), has a (����)���谡 �����ؾ� �Ѵ�.
*	- ����(������ �� �ִ� ����) ������ ����̴� O, / �л��� å�� ������ �ִ� O ��..
*	- ����� �����̴�X
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

class Human {					// �θ� Ŭ����, ���� Ŭ����, ���� Ŭ����, ���̽� Ŭ����
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};
class Student : public Human {	// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̹��� Ŭ����
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);	// �θ��� �Է°� ���� �Ӽ��� �޾Ƽ� �ʱ�ȭ �ؾ� ��!
	void showStudent();
};
Human::Human(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}
void Human::getData() {			// Ÿ�� �Ҽ�::�޼���� (�Ҽ��� �޼���� �տ�)
	std::cout << "�̸�: " << name << "����: " << age << std::endl;
}
/* ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ �Ѵ�.*/
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage){ // Human() �θ��� �����ڸ� ȣ��
	//strcpy(name, aname);		// ��ӿ��� �θ��� �Ӽ��� �ʱ�ȭ �� ���� �θ��� �ν��Ͻ��� ���� �����Ǿ� �־�� ��
	//age = aage;				// �׷��� �ڽ��� �θ� �Ӽ��� ���� ���� �� ����
	studentID = astudentID;		// ��ü ���� �� �ʱ�ȭ�� �ݷ� �ʱ�ȭ(����, ��� ��) �ڽ� �����ڿ��� �θ� ������ ȣ��
}
void Student::showStudent() {
	// cout << "�̸�: " << name << endl;	// �ڽ�Ŭ�������� �θ�Ŭ������ ���� �� ����
	cout << "�й�: " << studentID << endl;
}
int main() {
	Human h("ȫ�浿", 25);
	h.getData();
	
	Student h2{ "�Ӳ���", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}