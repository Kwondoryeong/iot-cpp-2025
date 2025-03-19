/*
	변수 초기화
*/

#include<iostream>
using namespace std;

int main() {
	int num = 3;			// 복사 초기화(복사 생성자 호출)
	int num2(30);			// 직접 초기화(값을 할당)
	int num3{ 300 };		// 중괄호 직접 초기화	
	int num4 = { 3000 };	// 중괄호 복사 초기화
	
	int x = 3.14;			// = 초기화는 암시적 변환을 허용하지만 데이터 손실 가능성 있음
	int x1{ 3.14 };			// {} 초기화는 데이터 손실 방지하기 위해 Narrowing 변환 막음

	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;

	return 0;
}