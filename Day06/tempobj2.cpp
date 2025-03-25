/*
*	
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {	// �ݷ� �ʱ�ȭ num�� n ������ �ʱ�ȭ
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
	void setData(int n) { num = n; }
};
int main() {
	//MyClass* ptr = &MyClass{ 10 };
	//MyClass& obj2 = MyClass{ 20 };		// �ӽð�ü�� ������ ����� �� ����.
											// �ӽ� ��ü�� �ٷ� ���� �߱� ������
	MyClass obj = MyClass{ 10 };			// 10 ������ ȣ�� 20 �Ҹ��� ȣ��(20������ ����)
	obj.setData(20);						// -> �ӽð�ü �Ҹ���� �ʰ� num 20���� �ٲ� �� �Ҹ��� ȣ���

	MyClass&& obj2 = MyClass{ 20 };			// && > rvalue ����
	obj2.setData(22);

	const MyClass obj3 = MyClass{ 30 };		// const 
	//obj3.setData(33);						// ��� ������ �ϹǷ� �� ���� ����

	cout << "bye~~" << endl;

	return 0;
}