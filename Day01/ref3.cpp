/*
*	참조자 : 별명, 선언시 바로 초기화 해주어야함
*/

#include<iostream>

using namespace std;

int chFunc(int);
void chFunc(int*);

int main() {
	int num = 10, num2 = 100;
	int& ref = num;			// num의 메모리 공간에 ref라는 별명이 붙는다.
	int* pn = &num;
	int& rref = ref;
	rref = num2;
	cout << rref << ", " << num2 << endl;
	// int& rref;			// 원래의 변수가 있어야 별명을 붙일 수 있음
	// rref = ref;			
	num++;
	ref++;
	(*pn)++;

	cout << "num++: " << num << endl;
	cout << "ref++: " << ref << endl;
	cout << "*(pn)++: " << *pn << endl;

	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;	// ref 주소도 동일한 주소공간을 가리킨다.
	
	return 0;
}
