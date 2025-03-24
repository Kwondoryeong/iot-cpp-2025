/*
*	�����Լ� ������ �����ε�: private
*   Ŭ���� �ȿ� friend �Լ� ������ �����ؾ� private �Ǵ� protected ��� ���� ���� > �����Լ� ��� ����
*	friend Ű���� ���
*	inline : �Լ��� ȣ���� ���� �ڵ忡 �����ϴ� ������� ������ ����ȭ �����Ϸ��� �˾Ƽ�
*/
#include<iostream>

using namespace std;

class Complex {
private:
	double real, image;
public:
	Complex(double _real = 0, double _image = 0) : real(_real), image(_image) {}// �ݷ� �ʱ�ȭ : ������� ������ ���ÿ� �ʱ�ȭ
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
	// Ŭ���� �ȿ� friend �Լ� ������ �����ؾ� private �Ǵ� protected ��� ���� ��� > �����Լ� ��� ����
	friend std::ostream& operator << (std::ostream& out, const Complex& other);
	friend Complex operator*(int n, const Complex& other);		
};
inline Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);		//
	
}
// ��� ������ �����ε�
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

	// cout ��ü�� ���� ��ü ���
	cout << c << endl;	// ��� �Ұ��� ��¿�����(<<)�� �⺻������ ��ü�� ����� �� ����.

	return 0;
}