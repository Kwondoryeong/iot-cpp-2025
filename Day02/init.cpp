/*
	���� �ʱ�ȭ
*/

#include<iostream>
using namespace std;

int main() {
	int num = 3;			// ���� �ʱ�ȭ(���� ������ ȣ��)
	int num2(30);			// ���� �ʱ�ȭ(���� �Ҵ�)
	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ	
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ
	
	int x = 3.14;			// = �ʱ�ȭ�� �Ͻ��� ��ȯ�� ��������� ������ �ս� ���ɼ� ����
	int x1{ 3.14 };			// {} �ʱ�ȭ�� ������ �ս� �����ϱ� ���� Narrowing ��ȯ ����

	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;

	return 0;
}