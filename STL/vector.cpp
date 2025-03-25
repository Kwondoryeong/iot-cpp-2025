/*
*	vector : <vector> ��� ���� ����
*	���� �ʱ�ȭ ���� ���� �� 0���� �ʱ�ȭ, �ݺ��� ��� �� vector�� ũ�� ��ŭ �ݺ�
*	vector.size(): ���� ũ��(����)�� ��ȯ
*	vector.begin(): begin()�� ù��° �ּ� ��ȯ(������)
*	vector.end(): end()�� �������� ���� �ּ� ��ȯ(������ ���� ��ȯ�� end() -1)
*	vector<int> v(5) = ũ�Ⱑ 5�� ���͸� �����ϰ� �⺻���� 0���� ��� ��� ä��
*	vector<int> v1{10} = ���� 10�� �ϳ��� ���ҷ� ������ ����
*/
#include <iostream>
#include <vector>		// vector ������� ����

using namespace std;

int main() {
	vector<int> v;
	vector<int> v1{ 10 };					// ���� 10�� �ϳ��� ���ҷ� ������ ����
	vector<int> v2(5);						// ũ�Ⱑ 5�� ���͸� �����ϰ� �⺻���� 0���� ��� ��� ä��(����5��)
	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };

	cout << "v size: " << v.size() << endl;
	cout << "v1 size: " << v1.size() << endl;
	cout << "v2 size: " << v2.size() << endl;
	cout << "v3 size: " << v3.size() << endl;

	for (int i = 0; i < 5; i++) {			// �����Ⱓ for��(������ ���� ��ŭ�� ���) - �ε��� ��� �Ұ�
		printf("v[%]: %d ", i, v2[i]);
	}
	cout << endl;
	for (auto i : v3) {
		//cout << v3[i] << endl;
		cout << i << endl;
	}
	// begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ�Ѵ�(������)
	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl;
	cout << "v3�� ������ ��Ұ�: " << *(v3.end() -1 ) << endl; // end�� ��������� ������ ��ȯ���� ������ ����-1
	return 0;
}