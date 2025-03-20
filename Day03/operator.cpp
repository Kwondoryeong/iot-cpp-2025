/*
*	연산자 오버로딩(다중정의)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay){
		printf("constructor call!!\n");
}	// 입력 값 2개 받는 디폴트 생성자 디폴트 매개변수 x = 0, y = 0
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
	Point add(const Point& other){
		printf("add() call!!");
		return Point(this->x + other.x,	this->y + other.y);
	}
};

int main(void) {
	Point obj(10, 20);
	obj.showPoint();

	Point obj2(30, 40);
	obj2.showPoint();

	Point obj3;
	obj3.showPoint();
	obj3 = obj.add(obj2);	// 두 개의 변수를 더하는 메서드 객체에 있는 멤버, 멤버함수
	obj3.showPoint();

	return 0;
}