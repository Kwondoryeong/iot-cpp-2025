/*
	cout - ����� ����ϴ� ��ü
*/
#include <iostream>
using namespace std;

int main(void) {
	int num = 100;		// C ��Ÿ�� ���� ����
	int num2(200);		// C++ ��Ÿ�� ���� ����
						// int�� num2 ��ü���� 200���� �ʱ�ȭ, �Լ�ȣ��� �򰥸��� ������ �̻��

	std::cout << num << std::endl;
	cout << num2 << endl;


	return 0;
}