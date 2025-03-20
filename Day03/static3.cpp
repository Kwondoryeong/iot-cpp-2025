/*
*	StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
*	3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문
*	출력 담당의 showmember() 메서드를 구현하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

class StaticTest {
private:
	char* name;
	char* pnum;
	char* addr;
	static int cnt;
public:
	
	StaticTest(const char* _name, const char* _pnum, const char* _addr) {
		this->name = new char[strlen(_name) + 1];
		this->pnum = new char[strlen(_pnum) + 1];
		this->addr = new char[strlen(_addr) + 1];

		strcpy(this->name, _name);
		strcpy(this->pnum, _pnum);
		strcpy(this->addr, _addr);

		cnt++;
	}
	void showmember() {
		cout << "회원번호: " << this->cnt << endl;
		cout << "이    름: " << this->name << endl;
		cout << "전화번호: " << this->pnum << endl;
		cout << "주    소: " << this->addr << endl;
	}
};
int StaticTest::cnt = 0;
int main() {
	StaticTest m1("홍길동", "010-1111-1111", "부산");
	m1.showmember();
	StaticTest m2("김영희", "010-2222-2222", "대구");
	m2.showmember();
	StaticTest m3("김철수", "010-3333-3333", "서울");
	m3.showmember();

	return 0;
}