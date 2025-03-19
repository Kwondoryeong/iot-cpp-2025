/*
*	��� �ʱ�ȭ
*	1. �̴ϼ�
*	2. ������
*	3. ��ü�� ����� ������ ���
*	����� ����� ���ÿ� �ʱ�ȭ
*	�Լ����� �ʱ�ȭ �Ϸ��� �Լ� �Ӹ����� : �ݷ��ʱ�ȭ
*	������ ���ÿ� �ʱ�ȭ �ؾ��ϴ� �� : reference(������)
*/

#include<iostream>
using namespace std;

class ConstClass {
private:
	int m_value;
	const int m_value2;		// ��� ��� ������ ��ü �������� �ݵ�� �ʱ�ȭ -> �ݷ� �ʱ�ȭ // 1.�̸� ������� ���
public:																			 
//	ConstClass(int value, int value2) { m_value = value; m_value2 = value2 }	 // 2. ��� ������ �Ұ�
//	ConstClass(int value, int value2) : m_value2(m_value2) { m_value = value; }  // ������ �Ӹ����� �ʱ�ȭ ���1
	ConstClass(int value, int value2) : m_value2(m_value2), m_value(m_value) {}	 // ������ �Ӹ����� �ʱ�ȭ ���2
	void showValue() {
		printf("value: %d, m_value2: %d\n", m_value, m_value2);
	}

};

class RefClass {
private:
	int& ref;			// reference ���� ��ü�� �����Ǳ� ���� �ݵ�� �ʱ�ȭ�� �̷������ �Ѵ�.
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
	Position(int x, int y) {					// 3) ���޹��� ������ �ʱ�ȭ pos ������
		printf("Position ������!!\n");
		m_x = x, m_y = y; }	// ������
};
class ObjClass {	// ObjClass 1.obj ��ü�� �����Ǳ�����
private:
	Position pos;									// 2. ��ü ��������� �������� �̹� ���� �Ǿ��־����
public:
	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }			// �ݷ� �ʱ�ȭ 2) ObjClass�� ����Ǳ� �� ��ü �ʱ�ȭ �ڵ� : pos(x,y) ������ ȣ��
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