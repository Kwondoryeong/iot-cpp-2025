/*
	������ : �ٸ� �Լ��� ����� ���������� ���� �ٲٴ� ���
	���۷��� - �Ǵٸ� �̸�, ������ �ʴ� ������, �޸𸮸� ������� �ʴ´�. ȿ������
	������ ���� ��� �ּҸ� ������ �޸𸮰����� �Ҵ� �޾ƾ���(���ÿ����� 4byte)
*/

#include<iostream>

using namespace std;

void chFunc(int& rn);	// ���۷���(��������) ����:& �Ǵٸ� ������ �������, ������ ���¿� �̸��� ����

int main() {
	int n = 10;
	cout << "ȣ�� �� n: " << n << endl;

	chFunc(n);
	cout << "void chFunc(*int)ȣ�� �� n: " << n << endl;


	return 0;
}

void chFunc(int& rn) {
	rn += 10;
}