/*
	(deep copy)복사생성자 - name을 동적 할당 받는 copyconstructor2 코드
	- 메모리 동적 할당 받은 경우 복사하는 객체도 동적 할당 받아서 별개로 복사하여 저장이 되어야 한다
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* name, int age) {
		cout << "생성자 호출!" << endl;
		this->name = new char[strlen(name) + 1];						// 동적할당
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& other) {										// 복사 생성자에서 그냥 복사하면 얕은 복사(쉐도우 카피)
		cout << "복사 생성자!" << endl;									// 복사 생성자에서도 동적 할당 하면 깊은 복사(딥 카피)
		this->age = other.age;											// 얕은 복사시 참조하고 있던 객체가 소멸 되면 힙 메모리공간 사라짐
		this->name = new char[strlen(other.name) + 1];					// 존재하지 않는 힙 영역을 가리키게 됨 -> 깊은 복사로 해결!
		strncpy(this->name, other.name, strlen(other.name) + 1);		// 새로운 힙 영역을 할당받아서 복사																		
	}
	~Person() {
		delete[] this->name;
	}
	void printPerson() {
		cout << "이름: " << this->name << ", 나이: " << this->age << endl;
		cout << "sizeof(name): " << sizeof(this->name) << endl;
	}
};

int main() {
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}

/*
	디폴트로 자동으로 제공받는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자, 
*/