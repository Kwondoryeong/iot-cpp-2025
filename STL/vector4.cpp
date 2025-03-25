/*
	vector container - 삽입, 삭제, 참조
	front() : 맨 첫번째 원소 참조. 리턴
	back(): 마지막 원소 리턴
	v.erase(iter)
	iterator 타입 : iterator, begin(), end()
*/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

void main() {
	vector<string> v;
	list<int> li;

	v.push_back("tiger");
	v.push_back("lion1");
	v.push_back("elephant");
	v.push_back("horse");

	cout << "v.front(): " << v.front() << endl;
	cout << "v.back(): " << v.back() << endl;
	cout << "v.capacity(): " << v.capacity() << endl;
	cout << endl;

	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/ ";
	}
	cout << endl;

	v.pop_back();		// 
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/ ";
	}
	cout << endl;

	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == "elephant") {
			v.erase(iter);
			break;
		}	
	}
	cout << endl;

	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/ ";
	}
}
