/*
*	��ũ�� �Լ�
*/
#include <iostream>
									// ��ũ�� �Լ�
#define ADD(a,b)	  #a "+" #b		// #�� ������ �����Ϸ��� �ƴ� ��ó���Ⱑ ó��
#define PI			  3.14			// ������ �͵� ��ũ�� �Լ��� ����
#define MSG(x, y, z)  x ## y ## z	// ��ó���Ⱑ ó���ϱ� ������ �ӵ��� ����

int main() {
	printf("ADD(a, b): %s\n", ADD(10, 20));
	printf("MSG(x, y, z): %s\n", MSG("macro", "operator+", "test"));


	return 0;
}