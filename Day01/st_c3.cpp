/*
	C++ Ŭ���� : class Ŭ������ public: 
*/
#include<iostream>

class Human {
public:
	char name[20];
	int age;
	char job[10];
	// ������ ȣ��
	Human(char name) {		// ����Ʈ ������
		
	}
	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);	// ����ü ������ ���� ������ ������ �ʿ� ����
	}
};


int main() {
	Human h = { "��ö��", 30, "���" };
	
	h.showHuman();

	return 0;
}