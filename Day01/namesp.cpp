/*
	namespace
*/
#include<iostream>
#include<stdio.h>

using namespace std;
namespace aName {
	void func() {
		printf("aName::func()\n");
		// std::cout << 
	}
}
namespace bName{
	void func() {
		printf("bName::func()\n");
	}
}
namespace cName {
	void func() {
		printf("cName::func()\n");
	}
}
int main() {
	aName::func();
	bName::func();
	//func();

	return 0;
}