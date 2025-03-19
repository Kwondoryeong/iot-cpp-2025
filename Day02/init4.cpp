/*
*	멤버 초기화
*	1. 이니셜
*	2. 참조자
*	3. 객체를 멤버로 가지는 경우
*	상수는 선언과 동시에 초기화
*	함수에서 초기화 하려면 함수 머리에서 : 콜론초기화
*	생성과 동시에 초기화 해야하는 것 : reference(참조자)
*/

#include<iostream>
using namespace std;

class ConstClass {
private:
	int m_value;
	const int m_value2;		// 상수 멤버 변수는 객체 생성전에 반드시 초기화 -> 콜론 초기화 // 1.미리 만들어진 상수
public:																			 
//	ConstClass(int value, int value2) { m_value = value; m_value2 = value2 }	 // 2. 상수 값변경 불가
//	ConstClass(int value, int value2) : m_value2(m_value2) { m_value = value; }  // 생성자 머리에서 초기화 방법1
	ConstClass(int value, int value2) : m_value2(m_value2), m_value(m_value) {}	 // 생성자 머리에서 초기화 방법2
	void showValue() {
		printf("value: %d, m_value2: %d\n", m_value, m_value2);
	}

};

class RefClass {
private:
	int& ref;			// reference 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
public:
	RefClass(int& r): ref(r) { }
	void showValue() {
		printf("ref: %d\n", ref);
	}
};

class Position {
private:
	int m_x;
	int m_y;
public:
	//int m_x;
	//int m_y;
	void getData() {
		printf("m_x: %d, m_y: %d\n", m_x, m_y);
	}
	Position(int x, int y) {					// 3) 전달받은 값으로 초기화 pos 생성됨
		printf("Position 생성자!!\n");
		m_x = x, m_y = y; }	// 생성자
};
class ObjClass {	// ObjClass 1.obj 객체가 생성되기전에
private:
	Position pos;									// 2. 객체 멤버변수를 가지려면 이미 생성 되어있어야함
public:
	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }			// 콜론 초기화 2) ObjClass가 실행되기 전 객체 초기화 코드 : pos(x,y) 생성자 호출
	void showValue() {
		pos.getData();
	}
};
int main() {
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	cout << "=============================" << endl;
	ObjClass obj3(3, 6);					// 1)
	obj3.showValue();
	
	
	return 0;
}