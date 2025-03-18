/*
*	출력인 경우: 레퍼런스
*	출력 타입을 맞추는 것이 기본
*/

#include<iostream>
using namespace std;

int& func(int& ref) {
	ref++;
	return ref;			// lvalue
	//return ++ref;		
	//return ref++;		// rvalue
}

int&& func2(int& reff) {
	reff++;
	//return ref;			// lvalue
	//return ++ref;		
	return reff++;			// rvalue
}

int main() {
	int n = 10;
	int& ref = func(n);
	int&& reff = func2(n);

	std::cout << ref << std::endl;

	return 0;
}