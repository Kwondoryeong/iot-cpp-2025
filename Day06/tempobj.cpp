/*
*/
#include <iostream>

using namespace std;

class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		cout << num << " constructor" << endl;
	}
	~MyClass() { cout << num << " destructor" << endl; }
};

int main() {
	MyClass obj{ 10 };				// obj라는 객체이름 있음
	MyClass obj2 = MyClass{ 20 };	// 객체 이름이 없음 -> 이름없는 임시 객체를 복사해서 생성
	MyClass{ 30 };

	cout << "bye~~" << endl;



	return 0;
}