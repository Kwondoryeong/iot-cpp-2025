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
	MyClass obj{ 10 };				// obj��� ��ü�̸� ����
	MyClass obj2 = MyClass{ 20 };	// ��ü �̸��� ���� -> �̸����� �ӽ� ��ü�� �����ؼ� ����
	MyClass{ 30 };

	cout << "bye~~" << endl;



	return 0;
}