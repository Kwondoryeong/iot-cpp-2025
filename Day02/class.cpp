/*
	class
*/
#include <iostream>
using namespace std;

class A {
public:
//private:					// Ŭ���� �� �ܺ� �̹Ƿ� �����Լ����� ���ٺҰ�
	int m_num;				// �������(�Ӽ�)

	void set(int num) {
		m_num = num;
	}

	void print() {	// ����Լ�(���), �޼���
		cout << "���� A Ŭ������ �ν��Ͻ� �Դϴ�. " << "num : " << m_num << endl;
	}
};
int main() {
	A obj;		// ���� ����� �Ȱ��� Ŭ���� AŸ���� ��ü a����
	obj.print();
	obj.set(10);
	obj.print();
	// A obj(10);
	// int n;
	return 0;
}
