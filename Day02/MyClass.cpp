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
	void setData() {		// 2. setData()를 사용한 초기화를 해줄 수 밖에 없음
		id = 1;
		strcpy(name, "김철수");
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
	MyClass obj;			// 1. 이렇게 생성자를 사용하지않고 객체를 생성시
	obj.setData();			// 2. setData()를 사용한 초기화를 해줄 수 밖에 없음
	// obj.MysetData();
	obj.getData();
	return 0;
}