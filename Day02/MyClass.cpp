/*
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class MyClass {
private:
	int id;
	char name[20];
	int age;
public:
	void setData() {		// 2. setData()�� ����� �ʱ�ȭ�� ���� �� �ۿ� ����
		id = 1;
		strcpy(name, "��ö��");
		age = 20;
	}
	void MysetData() {
		cin >> id >> name >> age;
	}
	void getData() {
		cout << "id: " << id << "\nname: " << name << "\nage: " << age << endl;
	}
};
int main() {
	MyClass obj;			// 1. �̷��� �����ڸ� ��������ʰ� ��ü�� ������
	obj.setData();			// 2. setData()�� ����� �ʱ�ȭ�� ���� �� �ۿ� ����
	// obj.MysetData();
	obj.getData();
	return 0;
}