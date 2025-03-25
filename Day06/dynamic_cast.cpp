/*
*	기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
*	상속관계에서 안전하게 형변환을 지원한다.
*	다운캐스팅 경우는 다형성을 위해서 virtual 메서드가 꼭 있어야한다
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Super {
public:
	int n1, n2;
private:

};
class Sub : public Super {// 일반적으로 상속은 public 타입
public:
	int n3, n4;

};
class Sub2 : public Sub {
public:
	int n5, n6;

};
int main() {
	Super* sp;
	Sub* sup;
	Sub2* sup2;
	Sub2 obj{};

	//sup2 = (&obj);
	sup2 = dynamic_cast<Sub2*>(&obj);	// 명시적 형변환
	sup = dynamic_cast<Sub*>(sup2);		// upcasting 자식을 부모타입으로 업캐스팅
	sp = dynamic_cast<Super*>(sup2);	// upcasting 
	

	return 0;
}