/*
	C++ 클래스 : class 클래스명 public: 
*/
#include<iostream>

class Human {
public:
	char name[20];
	int age;
	char job[10];
	// 생성자 호출
	Human(char name) {		// 디폴트 생성자
		
	}
	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);	// 구조체 안으로 들어갔기 때문에 접근할 필요 없음
	}
};


int main() {
	Human h = { "김철수", 30, "백수" };
	
	h.showHuman();

	return 0;
}