/*
	C++ 구조체 : 멤버변수 + 멤버함수(구조체 멤버이므로 .연산자로 접근가능)
*/
#include<iostream>

typedef struct human{
	char name[20];
	int age;
	char job[10];

	void showHuman() {
		printf("name: %s, age: %d, job: %s", name, age, job);	// 구조체 안으로 들어갔기 때문에 접근할 필요 없음
	}

} Human;


int main() {
	Human h = { "김철수", 30, "백수" };
	//showHuman(h);
	h.showHuman();

	return 0;
}