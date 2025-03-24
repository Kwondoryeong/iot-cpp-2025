/*
*	Ŭ���� ���ø� :
*/

#include<iostream>

using namespace std;

template <typename T>
class CTest {
private:
	T num;
public:
	CTest(T n) : num(n) {}
	//CTest(T);
	T getData() { return num; }

};
template <>						// Ŭ���� ���ø��� Ư��ȭ - Ÿ�� ����
class CTest<char> {
private:
	char data;
public:
	CTest(char d) : data(d) {};
	char getData() { return data; }
};

int main() {
	CTest<int> obj(10);			// Ŭ���� ���ø��� �ݵ�� �ν��Ͻ� ������ typename�� �ۼ��ؾ� �Ѵ�.
	std::cout << obj.getData() << std::endl;

	CTest<char> obj2('a');		// <Ÿ��>
	std::cout << obj2.getData() << std::endl;

	return 0;		
}