/*
*	��ũ�� �Լ�
*	��ũ�δ� ��ó���Ⱑ ó��������, inline �Լ��� �����Ϸ��� ó���Ѵ�.
*/
#include <iostream>
// ��ũ�� �Լ�

#define SQUARE(X) ((X)*(X))

using namespace std;

inline int funct(int x) {
	return x * x;
}
int main() {
	std::cout << SQUARE(2) << std::endl;
	std::cout << funct(2) << std::endl;
	return 0;
}