/*
	copyconstructor(복사 생성자) - 복사 생성자 만들어보기
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("constructor call!\n");
		strcpy(this->name, name);			// 이름이 같을 때 this포인터 사용 : 객체 자신을 가리킴 
		this->age = age;
	}										// 2. p라는 객체를 복사한 임시 객체가 생성됨( 1-1, 2-1 번 참고) 
	Person(const Person& other) {			// 복사생성자, 만들어진 p라는 객체를 참조해서 아래에 복사해서 멤버대 멤버로 복사해서 객체 생성
		printf("copy constructor!\n");		// 복사할 때 원본이 변경 되면 안되기 때문에 *const 사용*, 매개변수가 객체타입이면 복사생성자가 호출됨
		this->age = other.age;				// 객체로 받으면 안됨, *참조자로 받음(&)*
		strncpy(this->name, other.name, strlen(other.name) + 1);	// 널문자 포함 위한 + 1
	}
	void printPerson() {
		cout << "이름: " << this->name << ", 나이" << this->age << endl;
	}
};

int main() {
	Person p("홍길동", 30);	// Person 생성자 호출
	p.printPerson();

	Person p2(p);			// 복사 생성자 Person(const Person& other)호출 -> 이런 형태의 복사 생성자가 디폴트로 호출됨
	p2.printPerson();		// *입력이 객체라면 무조건 참조로 받음!* 참조로 받지 않으면 복사 생성자를 계속 호출해서 무한루프에 빠짐
							// 참조로 받는 것이 효율적
	Person p3 = p;			// 1. p라는 객체를 복사(복사 생성자 호출됨)
	p3.printPerson();		// 


	return 0;
}

void a(int aa) { // 2-1. aa 매개변수에 n을 복사해서 사용(call by value) ab의 n 값은 증가되지 않음
	aa++;
}

void ab() {
	int n = 10;
	a(n);	// 1-1. a함수 정의찾아감
}