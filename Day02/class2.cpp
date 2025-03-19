/*
	class 설계 시 멤버변수 : private
	멤버함수 : public
	초기화 시키는 함수
	생성자, 소멸자
*/

#include<iostream>

using namespace std;

class AClass {
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData() {		// 멤버변수 초기화 기능
		n1 = 10;
		n2 = 20;
	}
	void getData() {		// 속성값 가져오는 기능
		cout << "AClass 입니다!! "<< "n1 : " << n1 << ", n2 : " << n2 << endl;
		
	}
};

int main() {
	AClass obj;					// 디폴트로 생성해주는 생성자가 있음
	//AClass obj();				// 객체생성 코드이나 함수호출과 헷갈리므로 사용x
	//AClass obj(100, 200);		// 안됨 > 생성자 호출필요
	obj.setData();
	obj.getData();

	return 0;
}