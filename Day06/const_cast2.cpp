/*
*	const_cast : const 해제
*	const 해제 후 포인터로 접근해서 값 변경 가능 
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
		//num++; const기 때문에 안됨
		const_cast<MyClass*>(this)->num--;	// const 해제 후 포인터로 접근해서 값 감소
		cout << " After: " << num << endl;

	}
};

int main() {
	MyClass obj;
	obj.setNum(10);
	obj.print();

	return 0;
}