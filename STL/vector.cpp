/*
*	vector : <vector> 헤더 파일 포함
*	별도 초기화 하지 않을 시 0으로 초기화, 반복문 사용 시 vector의 크기 만큼 반복
*	vector.size(): 원소 크기(갯수)를 반환
*	vector.begin(): begin()은 첫번째 주소 반환(포인터)
*	vector.end(): end()는 마지막의 다음 주소 반환(마지막 값은 반환은 end() -1)
*	vector<int> v(5) = 크기가 5인 벡터를 생성하고 기본값인 0으로 모든 요소 채움
*	vector<int> v1{10} = 정수 10을 하나의 원소로 가지는 벡터
*/
#include <iostream>
#include <vector>		// vector 헤더파일 포함

using namespace std;

int main() {
	vector<int> v;
	vector<int> v1{ 10 };					// 정수 10을 하나의 원소로 가지는 벡터
	vector<int> v2(5);						// 크기가 5인 벡터를 생성하고 기본값인 0으로 모든 요소 채움(원소5개)
	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };

	cout << "v size: " << v.size() << endl;
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	cout << "v3 size: " << v3.size() << endl;

	for (int i = 0; i < 5; i++) {			// 범위기간 for문(원소의 갯수 만큼만 출력) - 인덱스 사용 불가
		printf("v[%]: %d ", i, v2[i]);
	}
	cout << endl;
	for (auto i : v3) {
		//cout << v3[i] << endl;
		cout << i << endl;
	}
	// begin()과 end()는 iterator(반복자) 타입을 반환한다(포인터)
	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;
	cout << "v3의 마지막 요소값: " << *(v3.end() -1 ) << endl; // end는 마지막요소 다음값 반환으로 마지막 값은-1
	return 0;
}