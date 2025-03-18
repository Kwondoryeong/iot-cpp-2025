/*
	함수 오버로딩 : 동일한 함수명이나 매개변수의 타입과 개수가 다르면 다른 함수
*/

#include <iostream>

using namespace std;

int func() {
	return 10;
}
int func(char c) {
	return c;
}
int func(int n) {
	return 10 + n;
}
int func(int n1, int n2) {
	return n1 + n2;
}
//char func(char c) {	// 함수명 매개변수 개수와 타입이 같으므로 같은 함수, 출력은 함수구분에 사용X
//	return c;
//}

int main() {
	int n = 20;
	int m = 30;
	char c = 'a';

	cout << func() << endl;
	cout << func(c) << endl;
	cout << func(n) << endl;
	cout << func(n, m) << endl;

	return 0;
}