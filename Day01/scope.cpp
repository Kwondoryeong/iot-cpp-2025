/*
*	#include "a.h" ���� ������� �߰�
*	:: > �������� �����ڷ� ���������ؾ� �ܺ� Ŭ���� ��밡��
*/

#include <iostream>
#include "scope.h"

A::A(int aa) {		// :: �������� ������
	a = aa;
}
void A::AInfo(){								// ������ AŬ���� �ȿ� �ִ� AInfo��� �޼���
	std::cout << "a: " << a << std::endl;
}

int main() {
	A a(10);
	a.AInfo();

	return 0;
}