/*
*	객체를 더하는 함수: add
*	객체를 리턴 시키는 함수
*	참조를 리턴한다.
*/
#include <iostream>

using namespace std;

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) { // 매개변수 있는 생성자
		printf("constructor\n");
	}
	Point(const Point& other) {		// 복사 생성자
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point& add(const Point& other) {
		printf("add()\n");
		// return Point(x + other.x, y + other.y);
		/* 참조로 리턴한다. */
		x = other.x;
		y = other.y;
		return *this;
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main() {
	Point p(10, 20);
	Point p2(30, 40);
	cout << "=======================================================" << endl;
	/*
	// 1-1. 객체 생성 후 값 받음
	Point p3;
	//cout << "=======================================================" << endl;
	p3 = p.add(p2);		// 1. 참조로 리턴하기 때문에 생성자 추가생성 되지않음 
	
	cout << "=======================================================" << endl;
	p3.showPoint();
	*/
	// 생성자 호출이 3번 있어야하는데 3번 호출됨 >> 참조로 리턴하기 때문!
	
	Point p3 = p.add(p2); // 1-2. 객체 생성하면서 값 받음 > 복사 생성자 호출됨
	p3.showPoint();


	return 0;
}