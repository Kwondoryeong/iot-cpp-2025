/*
	참조자 : 다른 함수에 선언된 지역변수의 값을 바꾸는 방법
	레퍼런스 - 또다른 이름, 보이지 않는 포인터, 메모리를 사용하지 않는다. 효율적임
	포인터 변수 경우 주소를 저장할 메모리공간을 할당 받아야함(스택영역에 4byte)
*/

#include<iostream>

using namespace std;

void chFunc(int& rn);	// 레퍼런스(참조변수) 선언:& 또다른 형태의 저장공간, 기존의 형태에 이름만 변경

int main() {
	int n = 10;
	cout << "호출 전 n: " << n << endl;

	chFunc(n);
	cout << "void chFunc(*int)호출 후 n: " << n << endl;


	return 0;
}

void chFunc(int& rn) {
	rn += 10;
}