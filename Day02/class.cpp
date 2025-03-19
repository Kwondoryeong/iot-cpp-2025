/*
	class
*/
#include <iostream>
using namespace std;

class A {
public:
//private:					// 클래스 밖 외부 이므로 메인함수에서 접근불가
	int m_num;				// 멤버변수(속성)

	void set(int num) {
		m_num = num;
	}

	void print() {	// 멤버함수(기능), 메서드
		cout << "나는 A 클래스의 인스턴스 입니다. " << "num : " << m_num << endl;
	}
};
int main() {
	A obj;		// 변수 선언과 똑같음 클래스 A타입의 객체 a선언
	obj.print();
	obj.set(10);
	obj.print();
	// A obj(10);
	// int n;
	return 0;
}
