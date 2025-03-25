/*
*	C++ 복사 생성자 호출 흐름과 RVO(Return Value Optimization)
*/
#include <iostream>

using namespace std;

class MyClass {	// 접근제어지시자 생략 시 private
	int num;
public:
	MyClass(int n) : num(n) {			
		cout << this << ", " << num << " constructor" << endl;
	}
	MyClass(const MyClass& other) : num(other.num) {		// 복사 생성자가 호출되는 부분
		cout << this << " copy constructor" << endl; 
	}
	~MyClass() { cout << this << ", " << num << " desturctor" << endl; }
	void setData(int n) { num = n; }	// method는 콜론초기화 불가(문법 지원x) 생성자만 가능
										// 일반 메서드는 초기화 해주는 기능을 하지 않기 때문에 생성자에서!
};
MyClass func(MyClass aobj) {
	cout << "func() " << endl;
	return aobj;
}

int main() {
	MyClass obj = MyClass(10);			// 객체 자기자신 주소값
	MyClass obj1{ func(obj)};			// 초기값 func 리턴 객체 > aobj 생성시 반드시 복사 생성자 호출
	cout << "bye~~" << endl;


	return 0;
}