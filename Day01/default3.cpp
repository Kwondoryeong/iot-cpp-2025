/*
*	�Լ� �����ε��߿��� ����Ʈ �Ű������� �Է��� ���� ������ �Լ� ���ǰ� ���� ��
*	�Է¾��� �Լ� ȣ�� �� ���� �߻�
*/
#include<iostream>

using namespace std;

int func(int n = 0) {

	return n * n;
}
int func() {

	return 10;
}
int func(char ch = 'a') {	// �������� �⺻��
	return 'a';
}


int main() {
	cout << func(10) << endl;
	//cout << func() << endl;	// ���α׷� ī��Ʈ���� � �Լ��� �ҷ��;����� ã������

	return 0;
}