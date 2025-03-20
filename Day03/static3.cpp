/*
*	StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
*	3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ����
*	��� ����� showmember() �޼��带 �����Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>

using namespace std;

class StaticTest {
private:
	char* name;
	char* pnum;
	char* addr;
	static int cnt;
public:
	
	StaticTest(const char* _name, const char* _pnum, const char* _addr) {
		this->name = new char[strlen(_name) + 1];
		this->pnum = new char[strlen(_pnum) + 1];
		this->addr = new char[strlen(_addr) + 1];

		strcpy(this->name, _name);
		strcpy(this->pnum, _pnum);
		strcpy(this->addr, _addr);

		cnt++;
	}
	void showmember() {
		cout << "ȸ����ȣ: " << this->cnt << endl;
		cout << "��    ��: " << this->name << endl;
		cout << "��ȭ��ȣ: " << this->pnum << endl;
		cout << "��    ��: " << this->addr << endl;
	}
};
int StaticTest::cnt = 0;
int main() {
	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
	m1.showmember();
	StaticTest m2("�迵��", "010-2222-2222", "�뱸");
	m2.showmember();
	StaticTest m3("��ö��", "010-3333-3333", "����");
	m3.showmember();

	return 0;
}