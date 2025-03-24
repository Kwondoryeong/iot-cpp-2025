/*
*	연산자 오버로딩(다중정의) : 생성자, 함수 오버로딩 다형성 대표기법
	> C는 함수이름만으로 구분 C++은 함수이름+매개변수 리턴타입은 함수구분 기준에 들어가지 않음
*	연산자 오버라이딩(재정의) : 
*	
*/
#include <iostream>

using namespace std;

class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) { }
	void showMyClass() {
		cout << m_a << ", " << m_b << ", " << m_name << endl;
	}
};

int main() {
	MyClass obj{ 1, 2, "홍길동" }; // 중괄호 초기화
	obj.showMyClass();

	MyClass obj2;
	// 형태가 다 다른 사용자 정의 객체로 일반적인 int, char형과 다른데 대입연산자로 객체가 복사, 생성되는지?
	obj2 = obj;					// > 연산자 오버로딩 때문!! 멤버 변수를 복사해서 obj2 객체가 생성됨, 디폴트 대입 연산자 제공
	obj2.showMyClass();

	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	MyClass obj3 = obj + obj2;	// 객체 + 객체 같은 사용자 자료형을 더하는 연산자가 없음
								// > + 연산자에 대한 오버로딩을 통해 구현 가능!


	return 0;
}
