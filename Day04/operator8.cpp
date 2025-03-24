/*
*	전역함수 연산자 오버로딩: private
*   클래스 안에 friend 함수 원형을 선언해야 private 또는 protected 멤버 접근 가능 > 전역함수 사용 가능
*	friend 키워드 사용
*	inline : 함수의 호출을 실제 코드에 삽입하는 방식으로 성능을 최적화 컴파일러가 알아서
*/
#include<iostream>

using namespace std;

class Complex {
private:
	double real, image;
public:
	Complex(double _real = 0, double _image = 0) : real(_real), image(_image) {}// 콜론 초기화 : 멤버변수 생성과 동시에 초기화
	Complex add(const Complex & other) {
			return Complex(real + other.real, image + other.image);
	}
	Complex operator+(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator*(int n) {
		return Complex(real * n, image * n);
	}
	void showComplex() {
		printf("real : %.1lf, image:.1lf\n", real, image);

	}
	// 클래스 안에 friend 함수 원형을 선언해야 private 또는 protected 멤버 접근 허용 > 전역함수 사용 가능
	friend std::ostream& operator << (std::ostream& out, const Complex& other);
	friend Complex operator*(int n, const Complex& other);		
};
inline Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);		//
	
}
// 출력 연산자 오버로딩
inline std::ostream& operator << (std::ostream& out, const Complex& other) {
	out << other.real << ", " << other.image;
	return out;
}
int main() {
	Complex c(1.1, 2.2);
	Complex c2(3.3, 4.4);
	Complex c3 = c + c2;
	c3.showComplex();
	Complex c4 = c * 100;
	c4.showComplex();
	Complex c5 = 100 * c3;
	c5.showComplex();

	// cout 객체를 통한 객체 출력
	cout << c << endl;	// 출력 불가능 출력연산자(<<)는 기본적으로 객체를 출력할 수 없다.

	return 0;
}