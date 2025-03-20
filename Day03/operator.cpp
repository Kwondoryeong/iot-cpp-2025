/*
*	������ �����ε�(��������)
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x{ ax }, y(ay){
		printf("constructor call!!\n");
}	// �Է� �� 2�� �޴� ����Ʈ ������ ����Ʈ �Ű����� x = 0, y = 0
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
	obj3 = obj.add(obj2);	// �� ���� ������ ���ϴ� �޼��� ��ü�� �ִ� ���, ����Լ�
	obj3.showPoint();

	return 0;
}