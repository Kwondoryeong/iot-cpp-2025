/*
	default
*/

#include <iostream>
using namespace std;

int func(int num = 1) {	// �������� �⺻��
	return num * num;
}

int main() {
	int inVal, inVal2, result;
	result = func(10);
	cout << result << endl;
	
	result = func(0);
	cout << result << endl;

	result = func();		// �Է��� ������ ����Ʈ �Ű����� ����
	cout << result << endl;

	return 0;
}