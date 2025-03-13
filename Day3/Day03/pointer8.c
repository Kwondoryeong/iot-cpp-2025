/*
	const
*/
#include<stdio.h>

int main() {
	const int num = 10;
	//num = 20;
	
	int num2 = 10;
	num2 = 20;
	int* pnum2 = &num2;			// 간접참조
	*pnum2 = 30;				// 포인터변수 pnum2가 가리키고 있는 값을 변경
	printf("%d\n", num2);

	const int* pn2 = &num2;		// const가 포인터변수 앞에 있는 것 : 포인터 변수를 통한 값 변경 막음, 데이터 상수
	//*pn2 = 100;
	num2 = 0;
	pn2 = &num2;

	int num3 = 40;
	int* const pnum3 = &num3;	// 포인터 상수, 포인터 변수가 가리키고 있는 다른 주소 값 변경 막음
	*pnum3 = 100;				// 
	printf("%d\n", num3);
	//pnum3 = &num2;

	const int* const pn5 = &num2; // 데이터 상수 + 포인터 상수
	//*pn5 = 1000;
	//pn5 = num3;
	num2 = 40;

	return 0;
}
