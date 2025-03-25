/*
*	const_cast : const ����
*	const ���� �� �����ͷ� �����ؼ� �� ���� ���� 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	void print() const {
		cout << "Before: " << num << endl; 
		//num++; const�� ������ �ȵ�
		const_cast<MyClass*>(this)->num--;	// const ���� �� �����ͷ� �����ؼ� �� ����
		cout << " After: " << num << endl;

	}
};

int main() {
	MyClass obj;
	obj.setNum(10);
	obj.print();

	return 0;
}