/*
	�Լ� �����ε� : ������ �Լ����̳� �Ű������� Ÿ�԰� ������ �ٸ��� �ٸ� �Լ�
*/

#include <iostream>

using namespace std;

int func() {
	return 10;
}
int func(char c) {
	return c;
}
int func(int n) {
	return 10 + n;
}
int func(int n1, int n2) {
	return n1 + n2;
}
//char func(char c) {	// �Լ��� �Ű����� ������ Ÿ���� �����Ƿ� ���� �Լ�, ����� �Լ����п� ���X
//	return c;
//}

int main() {
	int n = 20;
	int m = 30;
	char c = 'a';

	cout << func() << endl;
	cout << func(c) << endl;
	cout << func(n) << endl;
	cout << func(n, m) << endl;

	return 0;
}