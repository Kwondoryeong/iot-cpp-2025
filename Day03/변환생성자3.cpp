/*
	변환생성자3 - 암묵적인 변환을 허용하지 않는 변환 생성자
	//다른 타입의 객체로 변환될 때 호출되는 생성자.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {			// 1.생성자 앞에 explicit 사용하여 묵시적 변환 불가
		printf("변환 생성자 호출!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value : %d\n", value);
	}
};

int main(void) {
//	MyClass obj = 10;				// 변환 생성자 호출 > 객체 변환이 일어남 2. explicit 사용으로 묵시적 변환 불가
//	obj.printMyClass();				//

	MyClass obj2(10);
	obj2.printMyClass();
	
	MyClass obj3{ 20 };
	obj3.printMyClass();

	return 0;
}
