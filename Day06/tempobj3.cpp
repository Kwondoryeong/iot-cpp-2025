/*
*	C++ ���� ������ ȣ�� �帧�� RVO(Return Value Optimization)
*/
#include <iostream>

using namespace std;

class MyClass {	// �������������� ���� �� private
	int num;
public:
	MyClass(int n) : num(n) {			
		cout << this << ", " << num << " constructor" << endl;
	}
	MyClass(const MyClass& other) : num(other.num) {		// ���� �����ڰ� ȣ��Ǵ� �κ�
		cout << this << " copy constructor" << endl; 
	}
	~MyClass() { cout << this << ", " << num << " desturctor" << endl; }
	void setData(int n) { num = n; }	// method�� �ݷ��ʱ�ȭ �Ұ�(���� ����x) �����ڸ� ����
										// �Ϲ� �޼���� �ʱ�ȭ ���ִ� ����� ���� �ʱ� ������ �����ڿ���!
};
MyClass func(MyClass aobj) {
	cout << "func() " << endl;
	return aobj;
}

int main() {
	MyClass obj = MyClass(10);			// ��ü �ڱ��ڽ� �ּҰ�
	MyClass obj1{ func(obj)};			// �ʱⰪ func ���� ��ü > aobj ������ �ݵ�� ���� ������ ȣ��
	cout << "bye~~" << endl;


	return 0;
}