/*
*	������ : �ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ���2
*/

#include<iostream>

using namespace std;

int chFunc(int);
void chFunc(int*);

int main() {
	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;

	n = chFunc(n);
	cout << "int chFunc(int)ȣ�� �� n: " << n << endl;

	chFunc(&n);
	cout << "void chFunc(*int)ȣ�� �� n: " << n << endl;


	return 0;
}

int chFunc(int _n) {
	_n += 10;
	return _n;
}

void chFunc(int* _n) {
	*_n += 10;
}