/*
	new�� ���� ��ü ����
	new�� ������ ȣ���̵ǹǷ� �ʱ�ȭ�� �����ϴ�.
	������ - ��ü�� �����ϰ�, �ʱ�ȭ��Ű�� ����� ������ Ư���� �޼����̴�.
*/

#include<iostream>
using namespace std;
int main() {
	int* parr;
	int* pint;
	parr = new int[3] {10, 20, 30};		// �̸����� �迭��ü �����ϰ� 10, 20, 30���� �ʱ�ȭ
	pint = new int{ 10 };

	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;
	delete[] parr; // delete[] : �迭 delete ��
	delete pint;
	return 0;
}