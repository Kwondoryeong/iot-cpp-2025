/*
	step1. �̸��� ��ȭ��ȣ�� �����Ҵ�
	Human h("ȫ�浿", 30, "010-1234-1234");
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* _pname, int _age, const char* _ptel) {
		pname = new char[strlen(_pname) + 1];
		age = _age;
		ptel = new char[strlen(_ptel) + 1];
		strcpy(pname, _pname);
		strcpy(ptel, _ptel);
	}
	~Human() { delete[] pname, ptel; }
	void getData() const {
		cout << "�̸�: " << pname << "\n����: " << age << "\n��ȭ��ȣ: " << ptel << endl;
	}
};

int main() {
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}