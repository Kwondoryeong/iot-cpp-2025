/*
    name �޸� ���� �Ҵ� �޾� ������ �����
    �Ҹ��� : �޸� ��ȯ�� �Ҹ��� �ȿ��� delete 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class MyClass3 {
private:
    int id;
    //char name[20];
    char* name;                             // �ּ� �����ϱ� ���� char* 
    int age;
    
public:
    MyClass3() {}
    MyClass3(int _id, const char* _name, int _age);   // const������ �ϴ� ���� : "��ö��"�� ���ڿ� ���ͷ� ����̱� ����
    void getData() const;
    
    ~MyClass3() {                       // �Ҹ��� : ('~' ƿƮ) ����Ʈ�� �ڵ� ȣ��� - �����Ҵ� ��� �ƴϸ� ���� �ۼ�x
        delete[] name;                  // �޸� ��ȯ�� �Ҹ��� �ȿ� ���
    }
};
// class���� ������ �� > Ŭ������::(��������������)������or�Լ�
MyClass3::MyClass3(int _id, const char* _name, int _age) {    
    id = _id;
    name = new char[strlen(_name) + 1]; // ���� �Ҵ�
    strcpy(name, _name);                // �迭 ���� �� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ� �Ұ�
    age = _age;
}
                                        // ��¸� ����ϱ� ������ �Ӽ��� ������ ���� ���� const���(���ȭ)
void MyClass3::getData() const {        // ��� ��� �Լ�(��� ������� ���ȭ ��Ų��)
    cout << "ID: " << id << "\nName: " << name << "\nAge: " << age << endl;
    cout << "sizeof(��ö��) : " << sizeof(name) << endl;
    // id=2; 
}

int main() {
    MyClass3 obj(1, "��ö��", 20); 
    obj.getData();
  
   // delete &name;

    return 0;
}
