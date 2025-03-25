/*
*	reinterptet_cast
*	포인터->포인터, 포인터->변수, 변수->포인터로 하는 포인터 관련 연산자
*	char ch = 10;
*	int n = (int)ch;
*/
#include<iostream>

int main() {
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);			// int* --> long
	unsigned int ui = reinterpret_cast<int>(ip);	// int* --> uint
	printf("ip: %u, lg: %u, ui: %u\n", ip, lg, ui); // 출력값 같음
	
	/*
	//int* p = reinterpret_cast<int*>(lg);			// long --> int* 
	int* p1 = reinterpret_cast<int*>(ui);			// 64비트 부터는 안됨 32비트 시 가능
	printf("p1: %d\n", *p1);
	*/

	int* p = new int{ 100 };						
	char* pc = reinterpret_cast<char*>(p);			// pc포인터 타입
	printf("c: %d\n", *pc);							// int* --> char*

	// delete p;
	
	int* p2 = reinterpret_cast<int*>(pc);
	printf("p: %d\n", *p2);


	return 0;
}