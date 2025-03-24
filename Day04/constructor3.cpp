/*
*	��ü�� ���ϴ� �Լ�: add
*	��ü�� ���� ��Ű�� �Լ�
*	������ �����Ѵ�.
*/
#include <iostream>

using namespace std;

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) { // �Ű����� �ִ� ������
		printf("constructor\n");
	}
	Point(const Point& other) {		// ���� ������
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point& add(const Point& other) {
		printf("add()\n");
		// return Point(x + other.x, y + other.y);
		/* ������ �����Ѵ�. */
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
	// 1-1. ��ü ���� �� �� ����
	Point p3;
	//cout << "=======================================================" << endl;
	p3 = p.add(p2);		// 1. ������ �����ϱ� ������ ������ �߰����� �������� 
	
	cout << "=======================================================" << endl;
	p3.showPoint();
	*/
	// ������ ȣ���� 3�� �־���ϴµ� 3�� ȣ��� >> ������ �����ϱ� ����!
	
	Point p3 = p.add(p2); // 1-2. ��ü �����ϸ鼭 �� ���� > ���� ������ ȣ���
	p3.showPoint();


	return 0;
}