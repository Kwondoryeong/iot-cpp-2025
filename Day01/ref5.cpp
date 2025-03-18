/*
*	C++에서는 상수 참조(const int&)를 사용할 경우, 임시 객체(rvalue)를 참조하는 것이 허용됨
*	출력인 경우 : 일반 변수 > 출력 타입을 맞추면 됨, 참조로 받으면 상수 레퍼런스로 받으면됨
*	int func > int타입의 변수를 선언해야하지만 참조를 쓰고 싶다면 상수 레퍼런스 > 출력이 레퍼런스
*   일반변수, 상수 둘다가능
*/

#include<iostream>
using namespace std;

int func(int anum) {
	anum++;
	return anum;
}							// 1. 리턴값 반환 후 지역변수(anum)은 메모리에서 사라짐
//  int& func(int& anum) {	// 4. 형태로 참조타입으로 바꿀시 2.형태로 사용가능
//	anum++;
//	return anum;
//}
int main() {
	int num = 10;
	// int res = func(num);
	//int &res = func(num);	// 2.func(num)의 리턴값 anum을 &res가 참조
							// 3. anum 별칭 > res : 메모리에서 사라진 anum을 참조하므로 에러
							// 5. 호출되는 타입만으로는 타입을 알 수 없고 함수정의의 타입을 확인
	const int& res = func(num);	// const int& 는 rvalue(임시 객체)를 참조할 수 있다!
								
	std::cout << res << std::endl;


	return 0;
}