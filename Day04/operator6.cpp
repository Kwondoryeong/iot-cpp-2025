/*
*	��ü �ΰ��� ���� �� �ֵ��� ����
*	�����ε� �� �� ���� ������ > ::(����������), ., *(��������), sizeof ������
*/
#include<iostream>

using namespace std;

class MyClass {
private:
	int x, y;
public:
	MyClass(int ax = 0, int ay = 0) : x(ax), y(ay) {}
	MyClass add(const MyClass& other) {
		cout << "add()" << endl;
		return MyClass(x + other.x, y + other.y);
		}
	MyClass operator+(const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}
	void showMyClass() {
		cout << "showMyClass!" << endl;
		cout << "x : " << x << ", y : " << y << endl;
	}
};
int main(void) {
	MyClass obj(10, 20);
	obj.showMyClass();
	MyClass obj2(20, 30);
	obj2.showMyClass();
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();
	MyClass obj5 = obj4 + 100;
	obj5.showMyClass();
	// MyClass obj6 = 100 + obj5;		// ��ȯ��Ģ �ȵ�
	//obj6.showMyClass();
	return 0;
}
