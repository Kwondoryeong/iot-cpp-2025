/*
    ���ڿ� ó���ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class MyClass2 {
private:
    int id;
    char name[20];
    int age;
public:
    MyClass2(int _id, const char* _name, int _age) {
        id = _id;
        strcpy(name, _name);
        age = _age;
    }

    void printInfo() {
        std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    char str[20] = "ȫ�浿";   // �迭�� �����ϸ鼭 ���ڿ��� �ʱ�ȭ ����
    cout << str << endl;       // ũ�Ⱑ 4('ȫ', '��', '��', '\0')

    char str2[20];
    // str2 = "�迵��";        // �迭�̸��� ������ó�� ���������� �ּ� ��ü�� ������ �� ����
    strcpy(str2, "�迵��");    // ���� ������ �ƴ� ���� ������ �����ؾ���!
    cout << str2 << endl;

    char str3[20];
    //char* str3;                 // 1. ���Ұ��ϳ� 2.������� ��� ����
    cout << "�̸��Է� >> ";
    cin >> str3;
    cout << "�̸� : " << str3 << endl;
    // 2. const ����Ͽ� ��� ����
    const char* name;           // �����͸� ����ؼ� ���ڿ����� �ϴ� ���
    name = "��ö��";            // const ����ؾ� ���尡��
    cout << name << endl;

    return 0;
}
