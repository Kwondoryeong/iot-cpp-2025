/*
*	reinterptet_cast
*	������->������, ������->����, ����->�����ͷ� �ϴ� ������ ���� ������
*	char ch = 10;
*	int n = (int)ch;
*/
#include<iostream>

int main() {
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);			// int* --> long
	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> uint
	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui); // ��°� ����
	
	/*
	//int* p = reinterpret_cast<int*>(lg);			// long --> int* 
	int* p1 = reinterpret_cast<int*>(ui);			// 64��Ʈ ���ʹ� �ȵ� 32��Ʈ �� ����
	printf("p1: %d\n", *p1);
	*/

	int* p = new int{ 100 };						
	char* pc = reinterpret_cast<char*>(p);			// pc������ Ÿ��
	printf("c: %d\n", *pc);							// int* --> char*

	// delete p;
	
	int* p2 = reinterpret_cast<int*>(pc);
	printf("p: %d\n", *p2);


	return 0;
}