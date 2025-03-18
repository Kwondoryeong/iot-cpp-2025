/*
*	참조자 : 다른 함수에 선언된 지역변수의 값을 바꾸는 방법2
*/

#include<iostream>

using namespace std;

int chFunc(int);
void chFunc(int*);

int main() {
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	n = chFunc(n);
	cout << "int chFunc(int)호출 후 n: " << n << endl;

	chFunc(&n);
	cout << "void chFunc(*int)호출 후 n: " << n << endl;


	return 0;
}

int chFunc(int _n) {
	_n += 10;
	return _n;
}

void chFunc(int* _n) {
	*_n += 10;
}