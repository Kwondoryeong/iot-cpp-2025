/*
	��ȯ������ : �ٸ� Ÿ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������. 
	�Է��� �Ѱ��� ������ ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {				// 2. Ÿ���� �ٸ����� ���Կ����� �Ǵ� ���� : ��ȯ �����ڰ� ȣ��Ǳ� ����
		printf("��ȯ ������ ȣ��!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);	
	}
};
int main() {							
	MyClass obj = 10;					// 1. ����Ÿ���� ��ü�� MyClass Ÿ���� ��ü�� ��ȯ
	obj.printMyClass();					 

	MyClass obj2(10);					// �Է°� �ϳ� �޴� ������ > ��ȯ ������
	obj2.printMyClass();				


	return 0;
}