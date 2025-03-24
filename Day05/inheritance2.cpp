/*
*	�θ��� ���� ������ > protected�� ���� �� �ڽ� Ŭ�������� �Ӽ��� ���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};
class Student : public Human {
private :
	int studentID;
public:
	Student(const char* name, int age, int studentID);
	void showStudent();
};
Human::Human(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}
void Human::getData() {
	cout << "�̸�: " << name << "����: " << age << endl;
}
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
	studentID = astudentID;
}
void Student::showStudent() {
	cout << "�̸�: " << name << endl; // protected�� ���������Ƿ� ���� ����
	cout << "����: " << age << endl; // protected�� ���������Ƿ� ���� ����
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