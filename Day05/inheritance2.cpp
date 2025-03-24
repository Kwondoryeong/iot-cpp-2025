/*
*	부모의 접근 제어자 > protected로 변경 시 자식 클래스에서 속성값 접근 허용
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
	cout << "이름: " << name << "나이: " << age << endl;
}
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
	studentID = astudentID;
}
void Student::showStudent() {
	cout << "이름: " << name << endl; // protected로 변경했으므로 접근 가능
	cout << "나이: " << age << endl; // protected로 변경했으므로 접근 가능
	cout << "학번: " << studentID << endl;
}
int main() {
	Human h("홍길동", 25);
	h.getData();

	Student h2{ "임꺽정", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}