/*
*	전역함수 오버로딩 : operator(p1, p2) 함수는 전부 전역함수!, 지역함수 없음
*	1. public 
* 
*/
#include<iostream>

using namespace std;

class Point {
public:													// 
	int x, y;											// 이 경우 멤버가 public
	Point(int ax, int ay) : x(ax), y(ay) {}
	Point operator+(const Point& other) {				// 객체 + 객체
		return Point(x + other.x, y + other.y);
	}
	Point operator+(int n) {							// 객체 + 정수
		return Point(x + n, y + n);
	}
	void showPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};
Point operator+(int n, const Point& other) {
	return Point(n + other.x, n + other.y);
}
using namespace std;
int main() {
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	c.showPoint();
	Point d = a + 100;
	d.showPoint();
	Point e = 200 + b;
	e.showPoint();

	return 0;
}