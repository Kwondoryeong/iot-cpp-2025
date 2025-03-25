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
	MyClass(int n) : num(n) {	// 콜론 초기화 num을 n 값으로 초기화
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
	void setData(int n) { num = n; }
};
int main() {
	//MyClass* ptr = &MyClass{ 10 };
	//MyClass& obj2 = MyClass{ 20 };		// 임시객체는 참조를 사용할 수 없다.
											// 임시 객체를 바로 참조 했기 때문에
	MyClass obj = MyClass{ 10 };			// 10 생성자 호출 20 소멸자 호출(20생성자 없음)
	obj.setData(20);						// -> 임시객체 소멸되지 않고 num 20으로 바뀐 후 소멸자 호출됨

	MyClass&& obj2 = MyClass{ 20 };			// && > rvalue 참조
	obj2.setData(22);

	const MyClass obj3 = MyClass{ 30 };		// const 
	//obj3.setData(33);						// 상수 참조를 하므로 값 변경 불허

	cout << "bye~~" << endl;

	return 0;
}