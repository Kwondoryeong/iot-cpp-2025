/*
	class ���� �� ������� : private
	����Լ� : public
	�ʱ�ȭ ��Ű�� �Լ�
	������, �Ҹ���
*/

#include<iostream>

using namespace std;

class AClass {
private:
	int n1;
	int n2;
public:
	AClass() {}
	void setData() {		// ������� �ʱ�ȭ ���
		n1 = 10;
		n2 = 20;
	}
	void getData() {		// �Ӽ��� �������� ���
		cout << "AClass �Դϴ�!! "<< "n1 : " << n1 << ", n2 : " << n2 << endl;
		
	}
};

int main() {
	AClass obj;					// ����Ʈ�� �������ִ� �����ڰ� ����
	//AClass obj();				// ��ü���� �ڵ��̳� �Լ�ȣ��� �򰥸��Ƿ� ���x
	//AClass obj(100, 200);		// �ȵ� > ������ ȣ���ʿ�
	obj.setData();
	obj.getData();

	return 0;
}