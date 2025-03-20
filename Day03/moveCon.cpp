/*
	이동생성자(moveconstructor)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int n = 10;
	int& rn = n;				// 레퍼런스, 일반참조, 참조는 모두 lvalue 참조, l-value 참조
	const int& ra = 10;			// 상수참조는 const참조 가능

	int&& rrn = 10;				// r-value 참조

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}