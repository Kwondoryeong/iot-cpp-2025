/*
*	초기화 : 멤버변수 선언시 {} 중괄호 초기화 가능
*	생성자(매개변수) ':' 멤버변수(매개변수) -> 콜론 초기화, 이니셜라이져 리스트
*	
*/
#include <iostream>
using namespace std;

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };

public:
	CTime() { cout << "기본 생성자 호출" << endl; }			// 디폴트 생성자
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {
		cout << "입력 3개 받는 생성자 호출" << endl;
		//m_hour = h;
		//m_min = m;
		//m_sec = s;
	}
	void setTime(int hour, int min, int sec) {
		m_hour = hour;
		m_min = min;
		m_sec = sec;
	}
	void showTime() const {
		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
	}
};

int main() {
	CTime now;
	//CTime now();			// 1. 함수 호출과 헷갈리기 때문에 사용하지 않음
	//CTime now = CTime();	// 2. 디폴트 연산자 사용가능 
	now.showTime();
								// 생성자 3가지 방법
	CTime t(15, 30, 30);		// 직접초기화
	CTime tt = { 11, 11, 11 };	// (대입)복사생성자
	CTime ttt{ 22, 22, 22 };	// 리스트 초기화
	t.showTime();
	tt.showTime();
	return 0;
}