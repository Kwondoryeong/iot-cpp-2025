/*
	cin - 입력을 담당하는 객체
*/

#include <iostream>
using namespace std;

int main() {
	int inVal, inVal2, result;
	
	cout << "숫자를 입력하세요 > ";
	cin >> inVal >> inVal2;

	result = inVal + inVal2;
	cout << "inval 합: " << result << endl;

	return 0;
}