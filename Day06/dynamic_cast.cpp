/*
*	�⺻ Ŭ������ �����ϴ� lvalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ
*	��Ӱ��迡�� �����ϰ� ����ȯ�� �����Ѵ�.
*	�ٿ�ĳ���� ���� �������� ���ؼ� virtual �޼��尡 �� �־���Ѵ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Super {
public:
	int n1, n2;
private:

};
class Sub : public Super {// �Ϲ������� ����� public Ÿ��
public:
	int n3, n4;

};
class Sub2 : public Sub {
public:
	int n5, n6;

};
int main() {
	Super* sp;
	Sub* sup;
	Sub2* sup2;
	Sub2 obj{};

	//sup2 = (&obj);
	sup2 = dynamic_cast<Sub2*>(&obj);	// ����� ����ȯ
	sup = dynamic_cast<Sub*>(sup2);		// upcasting �ڽ��� �θ�Ÿ������ ��ĳ����
	sp = dynamic_cast<Super*>(sup2);	// upcasting 
	

	return 0;
}