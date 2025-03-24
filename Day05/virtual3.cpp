/*
*	�߻��ڷ����� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ���� �޸� ���� �� ���� Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻�.
*	���� ���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ���ȣ���� �����Ѵ�.
*	��ü ���� �� �θ� �����ڰ� ���� ����Ǹ�, �Ҹ��ڴ� �ڽĺ��� �����.
*	virtual�� ����� �Լ��� �θ� ������(CTest*)�� ���� ȣ���ϸ� �ڽ��� �������̵��� �Լ��� �����.
*	�θ� Ŭ������ �Ҹ��ڴ� virtual�� �������� ������ ���� �Ҵ�� ��ü�� delete�� �� �ڽ��� �Ҹ��ڰ� ȣ����� ���� �� ����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int anum) : num(anum) {
		cout << num << " CTest Constructor" << endl; }
	~CTest() { cout << num << " CTest destoructor" << endl; }
	virtual void vfunc() { cout << "CTest virtual function()" << endl;	}
	void func() { cout << "CTest function()" << endl;	}
};
class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTest constructor" << endl; }
	~CTestSub() {
		cout << subN << " CTestSub destructor" << endl;	}
	
	virtual void vfunc() {
		cout << "CTestSub function() override" << endl;	}
	void func() { 
		cout << "CTest function()" << endl; }
};
int main() {
	CTest obj(1);
	cout << "================================" << endl;
	CTestSub obj2(2, 22);		// �ڽ�Ŭ���� �����ϱ� ���� �θ�Ŭ���� ������ ���� �� ���ƿͼ� �ڽ�Ŭ���� ������ ����
	cout << "================================" << endl;
	obj.func();
	obj.vfunc();
	cout << "================================" << endl;
	obj2.func();
	obj2.vfunc();

	CTest* ptr = new CTestSub(3, 33);

	delete ptr;
	return 0;
}