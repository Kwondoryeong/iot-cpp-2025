/*
	C ±¸Á¶Ã¼ : ¸â¹öº¯¼ö
*/
#include<iostream>

typedef struct {
	char name[20];
	int age;
	char job[10];
} Human;

void showHuman(Human ah) {
	printf("name: %s, age: %d, job: %s", ah.name, ah.age, ah.job);
}

int main() {
	Human h = { "±èÃ¶¼ö", 30, "¹é¼ö" };
	showHuman(h);
	return 0;
}