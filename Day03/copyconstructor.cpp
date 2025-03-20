/*
	copyconstructor(복사 생성자) - 생성자 호출되지 않아도 디폴트로 호출되어 객체가 복사됨.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Person {
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* _name, int _age) {
		printf("Constructor call!!!\n");
		strcpy(m_name, _name);
		m_age = _age;
	}
	void printPerson() {
		printf("name: %s, age: %d\n", m_name, m_age);
	}
};

int main() {
	Person p("홍길동", 30);		// 1. person 생성자 호출됨
	p.printPerson();

	Person p2(p);				// 2. 생성자 호출 되지 않았지만 복사 생성자가 호출(디폴트 호출)되어 객체가 복사됨
	p2.printPerson();

	Person p3 = p;				// 3. 복사 생성자 호출되어 객체 복사!
	p3.printPerson();

	return 0;
}