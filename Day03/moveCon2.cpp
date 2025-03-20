/*
	이동 생성자(&&)
	r-value reference 를 파라미터로 갖는 이동 생성자
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
	// 입력 두개 받는 생성자
	Human(const char* name, int age) {				// 참조해야할 데이터를 복사
		cout << "입력 2개 생성자 호출!" << endl;
		strcpy(this->name, name);
		this->age = age;
	}
	// 복사 생성자
	Human(const Human& other) {
		cout << "복사 생성자 호출!" << endl;
		strncpy(this->name, other.name, strlen(other.name) + 1);
		this->age = other.age;
	}
	// 이동 생성자(r-value 참조 사용)
	Human(Human&& other) noexcept {				// r-value가 이동됨, 참조해야할 객체의 데이터가 이동 
		printf("이동 생성자 호출! 자원 이동\n");// noexcept 붙여줘야함(안전한 함수)
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.name = nullprt;
		other.age = 0;							// 이동 시킨 후
	}
	void printHuman() {
		cout << "이름: " << this->name << ", 나이: " << this->age << endl;
	}
};
int main() {
	Human h("홍길동", 30);
	h.printHuman();

	Human h2(h);
	h2.printHuman();

	Human h3(move(h));	// 이동생성자 사용 방법 : move()사용 std::move
	h3.printHuman();

	return 0;
}
