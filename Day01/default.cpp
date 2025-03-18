/*
	default
*/

#include <iostream>
using namespace std;

int func(int num = 1) {	// 문제없음 기본값
	return num * num;
}

int main() {
	int inVal, inVal2, result;
	result = func(10);
	cout << result << endl;
	
	result = func(0);
	cout << result << endl;

	result = func();		// 입력이 없으면 디폴트 매개변수 적용
	cout << result << endl;

	return 0;
}