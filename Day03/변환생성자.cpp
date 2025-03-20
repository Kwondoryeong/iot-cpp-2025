/*
	변환생성자 : 다른 타입의 객체로 변환될 때 호출되는 생성자. 
	입력을 한개만 가지는 생성자
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {				// 2. 타입이 다르지만 대입연산자 되는 이유 : 변환 생성자가 호출되기 때문
		printf("변환 생성자 호출!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);	
	}
};
int main() {							
	MyClass obj = 10;					// 1. 정수타입의 객체를 MyClass 타입의 객체로 변환
	obj.printMyClass();					 

	MyClass obj2(10);					// 입력값 하나 받는 생성자 > 변환 생성자
	obj2.printMyClass();				


	return 0;
}