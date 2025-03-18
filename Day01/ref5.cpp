/*
*	C++������ ��� ����(const int&)�� ����� ���, �ӽ� ��ü(rvalue)�� �����ϴ� ���� ����
*	����� ��� : �Ϲ� ���� > ��� Ÿ���� ���߸� ��, ������ ������ ��� ���۷����� �������
*	int func > intŸ���� ������ �����ؾ������� ������ ���� �ʹٸ� ��� ���۷��� > ����� ���۷���
*   �Ϲݺ���, ��� �Ѵٰ���
*/

#include<iostream>
using namespace std;

int func(int anum) {
	anum++;
	return anum;
}							// 1. ���ϰ� ��ȯ �� ��������(anum)�� �޸𸮿��� �����
//  int& func(int& anum) {	// 4. ���·� ����Ÿ������ �ٲܽ� 2.���·� ��밡��
//	anum++;
//	return anum;
//}
int main() {
	int num = 10;
	// int res = func(num);
	//int &res = func(num);	// 2.func(num)�� ���ϰ� anum�� &res�� ����
							// 3. anum ��Ī > res : �޸𸮿��� ����� anum�� �����ϹǷ� ����
							// 5. ȣ��Ǵ� Ÿ�Ը����δ� Ÿ���� �� �� ���� �Լ������� Ÿ���� Ȯ��
	const int& res = func(num);	// const int& �� rvalue(�ӽ� ��ü)�� ������ �� �ִ�!
								
	std::cout << res << std::endl;


	return 0;
}