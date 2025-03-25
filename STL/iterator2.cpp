/*
*	vector<int>::iterator iter는 순방향 반복자 선언
*	생략하고 auto 선언 가능
*/
#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v = { 10, 20, 30, 40, 50 };
	vector<int>::reverse_iterator rit;

	for (rit = v.rbegin(); rit != v.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << endl;

	for (auto rit = v.rbegin(); rit < v.rend(); rit++) {
		cout << *rit << endl;
	}

	return 0;
}