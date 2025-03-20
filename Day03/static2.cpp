/*
*	멤버변수 private
*	static 사용하게 되면 static 변수만 들어갈 수 있음
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class StaticTest {	
private:
	static int static_a;			// static 멤버 변수, 코드 세그먼트에 멤버변수, 멤버함수 저장되고
	int n;							// obj1, obj2 같은 객체가 공유함
public:
	StaticTest(int n);
	static void setStatic_a(int a);	// static 멤버 함수
	void print();
};

int StaticTest::static_a = 100;		// StaticTest 클래스에 속한 멤버변수

StaticTest::StaticTest(int n){
	this->n = n;					// 현재 객체의 멤버변수 n을 가리킴
}
void StaticTest::print() {
	printf("static_a: %4d, n: %4d\n", static_a, n);
}
using namespace std;

void StaticTest::setStatic_a(int a) {
	static_a = 50;
	// n = 0;						// 일반 멤버의 접근은 허용되지 않는다. static 멤버의 사용만 가능하다.
}

int main(void) {
	StaticTest obj1(10), obj2(20);
	obj1.print();
	obj2.print();

	obj1.setStatic_a(50);			// static_a를 50으로 변경 > 모든 객체에서 static_a 값 50으로 변경 
	obj1.print();					// static_a가 클래스 자체에 속하는 변수이기 때문

	return 0;
}