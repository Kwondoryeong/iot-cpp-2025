/*
	�̵� ������(&&)
	r-value reference �� �Ķ���ͷ� ���� �̵� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Human {
private:
	char name[10];
	int age;
public:
	// �Է� �ΰ� �޴� ������
	Human(const char* name, int age) {				// �����ؾ��� �����͸� ����
		cout << "�Է� 2�� ������ ȣ��!" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	// ���� ������
	Human(const Human& other) {
		cout << "���� ������ ȣ��!" << endl;
		strncpy(this->name, other.name, strlen(other.name) + 1);
		this->age = other.age;
	}
	// �̵� ������(r-value ���� ���)
	Human(Human&& other) noexcept {				// r-value�� �̵���, �����ؾ��� ��ü�� �����Ͱ� �̵� 
		printf("�̵� ������ ȣ��! �ڿ� �̵�\n");// noexcept �ٿ������(������ �Լ�)
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.name = nullprt;
		other.age = 0;							// �̵� ��Ų ��
	}
	void printHuman() {
		cout << "�̸�: " << this->name << ", ����: " << this->age << endl;
	}
};
int main() {
	Human h("ȫ�浿", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(move(h));	// �̵������� ��� ��� : move()��� std::move
	h3.printHuman();

	return 0;
}
