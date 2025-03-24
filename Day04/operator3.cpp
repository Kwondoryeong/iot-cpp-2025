/*
*	오버로딩 : 객체를 더하는 함수
*/
#include <iostream>

using namespace std;

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {	// 매개변수 있는 생성자
		printf("constructor\n");
	}
	Point(const Point& other) {						// 복사 생성자
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point add(const Point& other) {
		printf("add()\n");

		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main() {
	Point p(10, 20);
	Point p2(30, 40);
	cout << "=======================================================" << endl;
	Point p3;
	cout << "=======================================================" << endl;
	p3 = p.add(p2);		// 1.p2에 대한 참조 2. add() 프린트 후 3. 객체 생성
	cout << "=======================================================" << endl;
	p3.showPoint();
	// 생성자 호출이 3번 있어야하는데 4번 호출됨 >> 우리가 모르는 생성자 호출이 있음
	//
	Point p4;			// 대입연산자 호출됨
	p4 = p3;
	p4.showPoint();

	return 0;
}