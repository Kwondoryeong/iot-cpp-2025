/*
	setp4.
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
	xman = man �� �����Ű�ÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Human {
private:
	char* name;
	int age;

public:
	Human(const char* name = "default", int age = 0) {
		printf("constructor~\n");
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;
	}
	Human(const Human& other) {
		cout << "���� ������!" << endl;
		this->age = other.age;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	}
	~Human() {
		printf("destructor~\n");
		delete[] this->name;
	}
	//Human operator=(const Human& other);
	void showHuman() {
		cout << "�̸�: " << name << ", ����: " << age << endl;
	}
	const Human& operator=(const Human& rhs);
};
const Human& Human::operator=(const Human& rhs) {		// this�� ������ ������ �ȵǹǷ� ���(const)ȭ ���ִ� ���� ����
	if (this != &rhs) {									// ����ó�� �ٸ��� ����!
		delete[] name;									// �޸𸮵����Ҵ� �� ���� ���� �����ε��ؾ��Ѵ�.
		printf("operator overloading!\n");				
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return *this;
}
int main() {
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman(man);			// ���������
	copyman.showHuman();		

	Human xman;					// ��������� ���� ���������� �ϳ� ��ü�� ������鼭 ��ȯ�� �޸𸮰����� ����Ű�� ����
	xman = copyman;				
	xman.showHuman();		

	return 0;
}
