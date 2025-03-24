/*
	setp4.
	char 포인터의 name, int타입의 age, 출력을 담당하는 showHuman()을 가지는 Human 클래스가 있다.
	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
	xman = man 을 실행시키시오.
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
		cout << "복사 생성자!" << endl;
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
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
	const Human& operator=(const Human& rhs);
};
const Human& Human::operator=(const Human& rhs) {		// this는 변경이 있으면 안되므로 상수(const)화 해주는 것이 좋음
	if (this != &rhs) {									// 예외처리 다르면 복사!
		delete[] name;									// 메모리동적할당 시 전부 새로 오버로딩해야한다.
		printf("operator overloading!\n");				
		this->name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		this->age = rhs.age;
	}
	return *this;
}
int main() {
	Human man("홍명보", 30);
	man.showHuman();

	Human copyman(man);			// 복사생성자
	copyman.showHuman();		

	Human xman;					// 얕은복사로 인해 힙영역에서 하나 객체가 사라지면서 반환된 메모리공간을 가리키기 때문
	xman = copyman;				
	xman.showHuman();		

	return 0;
}
