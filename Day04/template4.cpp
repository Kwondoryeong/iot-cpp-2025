/*
*	Ŭ���� ���ø� : �ڷ����� �������� �ʴ� �Ϲ�ȭ�� Ŭ������ ���� �� ���
*	> �ڵ� �ߺ��� ���̰�, ���� �ڷ������� �����ϴ� ������ Ŭ���� ���� ����
*/

#include<iostream>
using namespace std;
template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) { data = d; }
	T getData() { return data; }
};

int main() {
	CTemplate<int> obj(100);
	cout << obj.getData() << endl;

	CTemplate<string> obj2("Ŭ�������ø��׽�Ʈ");
	std::cout << obj2.getData() << std::endl;

	return 0;
}