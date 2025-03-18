/*
*	함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때
*	입력없는 함수 호출 시 문제 발생
*/
#include<iostream>

using namespace std;

int func(int n = 0) {

	return n * n;
}
int func() {

	return 10;
}
int func(char ch = 'a') {	// 문제없음 기본값
	return 'a';
}


int main() {
	cout << func(10) << endl;
	//cout << func() << endl;	// 프로그램 카운트에서 어떤 함수를 불러와야할지 찾지못함

	return 0;
}