/*
* static - 클래스 멤버다. (this 포인터가 없다) > 객체(멤버)가 아니기 때문
* 객체들이 공유한다.
* this 포인터 : 객체 자기자신을 가리키는 포인터
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
class StaticTest {
public:
	int n;
	static int static_n;			// static 멤버 변수

	StaticTest();
	void print();
};

int StaticTest::static_n = 10;		// static 멤버변수 초기화는 클래스 외부에서 이루어져야 한다.

StaticTest::StaticTest() {
	n = 20;
	static_n = 10;
}
void StaticTest::print() {
	cout << "Static_n: " << static_n << ", n: " << n << endl;
}
int main(void) {
	StaticTest ob1, ob2;
	ob1.print();
	ob2.print();

	ob2.static_n = 1000;
	ob2.n = 50;
	ob2.print();
	ob1.print();


	return 0;
}