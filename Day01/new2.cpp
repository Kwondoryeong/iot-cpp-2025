/*
	C++ Sytle :	동적 할당받을 크기를 입력(배열크기)하고 원소를 저장하여 출력하시오.
	메모리 동적 할당 : new - delete
	자료형 포인터 = new 자료형(크기)
	new는 생성자를 호출한다. 즉 new는 객체를 생성시킨다. 
	객체를 생성하기 위해서는 생성자 호출이 있어야 한다.
*/

#include<iostream>

using namespace std;

int main() {
	int size;
	int* pary;
	//int* pn = new int;		힙영역에 int크기로 동적 할당 받음
	//delete pn;				메모리 반환
	cout << "동적 할당받을 크기를 입력하세요 >";
	cin >> size;

//	cout << "%d개 원소를 입력하세요 > " << size << endl;
//	cin >> 

	pary = new int[size];
	pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;

	cout << pary[0] << ", " << pary[1] << ", " << *(pary + 2) << endl;

	delete[] pary;

	
	return 0;
}