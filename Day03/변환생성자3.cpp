/*
	��ȯ������3 - �Ϲ����� ��ȯ�� ������� �ʴ� ��ȯ ������
	//�ٸ� Ÿ���� ��ü�� ��ȯ�� �� ȣ��Ǵ� ������.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class MyClass {
private:
	int value;
public:
	explicit MyClass(int value) {			// 1.������ �տ� explicit ����Ͽ� ������ ��ȯ �Ұ�
		printf("��ȯ ������ ȣ��!!\n");
		this->value = value;
	}
	void printMyClass() {
		printf("value : %d\n", value);
	}
};

int main(void) {
//	MyClass obj = 10;				// ��ȯ ������ ȣ�� > ��ü ��ȯ�� �Ͼ 2. explicit ������� ������ ��ȯ �Ұ�
//	obj.printMyClass();				//

	MyClass obj2(10);
	obj2.printMyClass();
	
	MyClass obj3{ 20 };
	obj3.printMyClass();

	return 0;
}
