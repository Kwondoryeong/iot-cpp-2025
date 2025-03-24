/*
*	��� ���迡�� ��ü ���� �� �Ҹ�
*	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���.
*	-> ��ü�� �����ϸ� �θ� Ŭ�������� ���ʴ�� �����ڰ� ȣ�������,
	-> �������� ���� ������ �ڽ� Ŭ�������� �θ� Ŭ������ ����.
*	SuperClass�� num, SubClass�� subNum�� �����ϸ�, ��� ���谡 ����.
*	��ü ���� �� �θ� Ŭ���� �����ڰ� ���� ����� ��, �ڽ� Ŭ���� �����ڰ� �����.
*	��ü �Ҹ� �� �ڽ� Ŭ���� �Ҹ��ڰ� ���� ����� ��, �θ� Ŭ���� �Ҹ��ڰ� �����.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class SuperClass {
private:
	int num;
public:
	SuperClass(int an) {						// 1. ������ ȣ��, 2-1.������ ȣ��
		num = an;
		cout << num << " SuperClass constructor" << endl;
	}
	~SuperClass(){
		cout << num << " SuperClass Destructor" << endl;	// 5. SubClass �Ҹ��� ȣ�� 6. SuperClass �Ҹ��� ȣ��
	}
};
class SubClass : public SuperClass {
private:
	int subNum;
public:
	SubClass(int an, int an2) : SuperClass(an){		// 2. SubClass�� SuperClass(an)�� ���� ���� ������ ȣ��
		subNum = an2;
		cout << subNum << " SubClass constructor" << endl;	// 3. subClass ������ ȣ��
	}
	~SubClass() {
		cout << subNum << " SubClass Destructor" << endl;	// 4. subClass �Ҹ��� ȣ��
	}
};

int main() {
	SuperClass s{ 1 };
	cout << "======================================" << endl;
	SubClass sub{ 2, 22 };		
	//�θ�Ŭ���� ������ ȣ�� > �θ�Ŭ���� ������ ȣ�� > �ڽ�Ŭ���� ������ ȣ�� > �ڽ�Ŭ���� �Ҹ��� ȣ�� > �θ�Ŭ���� �Ҹ��� ȣ�� > �θ�Ŭ���� �Ҹ��� ȣ��
	
	
	return 0;
}