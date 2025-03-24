/*
*	����Լ� ������ �����ε�: operator Ű���� ��� 
*	���� ������ ��� : p1 operator������(p2)
*				 > ex) p1 operator+(p2)
*	
*/

#include <iostream>

using namespace std;
class MyClass {
private:
	int value;
public:
	MyClass(int n) : value(n) {}

	MyClass operator+(const MyClass& other) {
		printf("+ overloading\n");
		return MyClass(value + other.value);
	}

	void showMyClass(){
		printf("value: %d\n", value);
	}
};

int main() {
	MyClass obj(10);				// �ʱⰪ�� ������ ��ü ����
	obj.showMyClass();

	MyClass obj2(obj);				// obj�� �����ؼ� ��ü ����
	obj2.showMyClass();

	MyClass obj3 = obj2;			// obj�� �����ؼ� ��ü ����
	obj3.showMyClass();

	MyClass obj4 = obj + obj2 + obj3;		// 1. ��ü�� ���� ����� ������ ��ü ����
	//MyClass obj4 = obj.operator+(obj2);	// 2. 1,2 �ΰ��� ��� ��� ��� ����
	//MyClass obj4 = (obj.operator+(obj2)).operator+(obj3);	// 3. �������� ��뼺 ������ 1.�� ��� �����õ!
	obj4.showMyClass();

	return 0;
}