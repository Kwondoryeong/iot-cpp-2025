/*
*	vector container 출력
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	printf("%d\n", v[2]);

	/* 출력 1 */
	for (auto i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
		cout << v.at(i) << endl;
	}

	cout << endl << endl;
	/* 출력 2 */
	for (vector<int>::size_type i = 0; i < v.size(); i++) {	//size_type : 벡터 라이브러리에 있는 벡터 int 타입
		cout << v[i] << endl;
	}
	cout << endl << endl;
	/* 출력 3 */
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end();) {
		cout << *iter << endl;
	}
	/* 출력 4 */
	for (auto i : v) {
		cout << i << endl;
	}
	return 0;
}