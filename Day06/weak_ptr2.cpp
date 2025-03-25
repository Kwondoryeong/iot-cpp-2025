/*
*	순환참조 : 두 객체가 서로를 참조하고, 둘 다 shared_ptr을 사용하여 참조를 유지하는 경우에 발생
*/
#include <iostream>

using namespace std;

struct B;
struct A {
	shared_ptr<B> b_ptr;
};

struct B {
	// shared_ptr<A> a_ptr;
	shared_ptr<A> a_ptr;
};

int main() {
	shared_ptr<A> a(new A());
	shared_ptr<B> b(new B());

	a->b_ptr = b;
	b->a_ptr = a;


	return 0;
}