/*
	�̵�������(moveconstructor)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int n = 10;
	int& rn = n;				// ���۷���, �Ϲ�����, ������ ��� lvalue ����, l-value ����
	const int& ra = 10;			// ��������� const���� ����

	int&& rrn = 10;				// r-value ����

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}