/*
*	�ʱ�ȭ : ������� ����� {} �߰�ȣ �ʱ�ȭ ����
*	������(�Ű�����) ':' �������(�Ű�����) -> �ݷ� �ʱ�ȭ, �̴ϼȶ����� ����Ʈ
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
	CTime() { cout << "�⺻ ������ ȣ��" << endl; }			// ����Ʈ ������
	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s) {
		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
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
		printf("���� �ð��� %d:%d:%d �Դϴ�.\n", m_hour, m_min, m_sec);
	}
};

int main() {
	CTime now;
	//CTime now();			// 1. �Լ� ȣ��� �򰥸��� ������ ������� ����
	//CTime now = CTime();	// 2. ����Ʈ ������ ��밡�� 
	now.showTime();
								// ������ 3���� ���
	CTime t(15, 30, 30);		// �����ʱ�ȭ
	CTime tt = { 11, 11, 11 };	// (����)���������
	CTime ttt{ 22, 22, 22 };	// ����Ʈ �ʱ�ȭ
	t.showTime();
	tt.showTime();
	return 0;
}