/*
*	클래스 템플릿 : 자료형에 의존하지 않는 일반화된 클래스를 만들 때 사용
*	> 코드 중복을 줄이고, 여러 자료형에서 동작하는 유연한 클래스 설계 가능
*/

#include<iostream>
using namespace std;
template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) { data = d; }
	T getData() { return data; }
};

int main() {
	CTemplate<int> obj(100);
	cout << obj.getData() << endl;

	CTemplate<string> obj2("클래스템플릿테스트");
	std::cout << obj2.getData() << std::endl;

	return 0;
}