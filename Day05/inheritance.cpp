/*
*	Inheritance(상속) : 부모(슈퍼=상위=기초=베이스)클래스, 자식(서브=하위=파생=드라이버드)클래스
*	private, public, 상속관련 접근 지시자 : protected
*	is a(무엇은 무엇이다.), has a (소유)관계가 성립해야 한다.
*	- 무엇(포함할 수 있는 관계) 경찰은 사람이다 O, / 학생은 책을 가지고 있다 O 등..
*	- 사람은 경찰이다X
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

class Human {					// 부모 클래스, 기초 클래스, 슈퍼 클래스, 베이스 클래스
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};
class Student : public Human {	// 자식 클래스, 파생 클래스, 서브 클래스, 드라이버드 클래스
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);	// 부모의 입력값 까지 속성값 받아서 초기화 해야 함!
	void showStudent();
};
Human::Human(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}
void Human::getData() {			// 타입 소속::메서드명 (소속은 메서드명 앞에)
	std::cout << "이름: " << name << "나이: " << age << std::endl;
}
/* 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화 한다.*/
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage){ // Human() 부모의 생성자를 호출
	//strcpy(name, aname);		// 상속에서 부모의 속성을 초기화 할 때는 부모의 인스턴스가 먼저 생성되어 있어야 함
	//age = aage;				// 그래야 자식이 부모 속성을 물려 받을 수 있음
	studentID = astudentID;		// 객체 생성 전 초기화는 콜론 초기화(참조, 상수 등) 자식 생성자에서 부모 생성자 호출
}
void Student::showStudent() {
	// cout << "이름: " << name << endl;	// 자식클래스에서 부모클래스에 접근 시 오류
	cout << "학번: " << studentID << endl;
}
int main() {
	Human h("홍길동", 25);
	h.getData();
	
	Student h2{ "임꺽정", 30, 202503 };
	h2.getData();
	h2.showStudent();

	return 0;
}