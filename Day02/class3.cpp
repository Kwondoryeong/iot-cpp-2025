/*
	생성자constructor >	객체를 생성하면서 초기값 함께 주기
	- 생성자 호출로 객체가 만들어진다.
	- 객체 생성시 구조에 맞는 생성자가 없으면 객체는 생성되지 않는다.
	- 생성자는 초기화기능에 사용한다.
	- 생성자는 오버로딩이 가능하다.
	- 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않는다.
	- 소멸자는 기본 생성자에 ~ 붙이기
*/

#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
	int m_num;
public:
	MyClass() {						// 2. 생성자 오버로딩 되기 때문에 입력값 없는 기본 생성자 가능

	}
	MyClass(int num) {
		m_num = num;
	}
	~MyClass() {}					// 3. 소멸자는 기본 생성자에 ~붙이기
	MyClass(int num1, int num2) {	// 1. 생성자 > 입력값 받는 함수만들기
		m_num1 = num1;
		m_num2 = num2;
	}

	void printData() {
		cout << "나는 MyClass의 인스턴스 입니다 " << endl;
		cout << "m_num1: " << m_num1 << "\nm_num2: " << m_num2 << "\nm_num: " << m_num << endl;
	}
};

int main() {
	MyClass obj;				// 2-1.입력값 2개 받는 생성자 만든 후 사용 불가로 기본 생성자 생성 후 사용 가능
	MyClass obj2(100, 200);		// 1-1.초기값 2개 받아 생성자
	MyClass obj3(11);			// 초기값 1개 받는 생성자
	obj2.printData();
	obj3.printData();

	return 0;
}