/*
	C++ Sytle :	���� �Ҵ���� ũ�⸦ �Է�(�迭ũ��)�ϰ� ���Ҹ� �����Ͽ� ����Ͻÿ�.
	�޸� ���� �Ҵ� : new - delete
	�ڷ��� ������ = new �ڷ���(ũ��)
	new�� �����ڸ� ȣ���Ѵ�. �� new�� ��ü�� ������Ų��. 
	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־�� �Ѵ�.
*/

#include<iostream>

using namespace std;

int main() {
	int size;
	int* pary;
	//int* pn = new int;		�������� intũ��� ���� �Ҵ� ����
	//delete pn;				�޸� ��ȯ
	cout << "���� �Ҵ���� ũ�⸦ �Է��ϼ��� >";
	cin >> size;

//	cout << "%d�� ���Ҹ� �Է��ϼ��� > " << size << endl;
//	cin >> 

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;

	delete[] pary;

	
	return 0;
}