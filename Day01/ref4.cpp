/*
*	��� ���۷��� : ����� ���� �����ϴ�.
*/

#include<iostream>
using namespace std;

int main() {
	int n = 10;
	// int& ref = n;
	const int& ref = 10;	// ������۷����� �����ϸ� ���ͷ��� ������ �� �ִ�.
							// �ӽð�ü�� ������ �� �ִ� ������ �����ȴ�.
							// ���۷����� �̸��� ������ �ּҰ����� ��ü��
	cout << "ref: " << ref << endl;


	return 0;
}