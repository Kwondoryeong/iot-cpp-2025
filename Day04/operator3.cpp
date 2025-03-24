/*
*	�����ε� : ��ü�� ���ϴ� �Լ�
*/
#include <iostream>

using namespace std;

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {	// �Ű����� �ִ� ������
		printf("constructor\n");
	}
	Point(const Point& other) {						// ���� ������
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
	p3 = p.add(p2);		// 1.p2�� ���� ���� 2. add() ����Ʈ �� 3. ��ü ����
	cout << "=======================================================" << endl;
	p3.showPoint();
	// ������ ȣ���� 3�� �־���ϴµ� 4�� ȣ��� >> �츮�� �𸣴� ������ ȣ���� ����
	//
	Point p4;			// ���Կ����� ȣ���
	p4 = p3;
	p4.showPoint();

	return 0;
}