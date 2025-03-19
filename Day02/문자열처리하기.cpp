/*
    문자열 처리하기
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
    char str[20] = "홍길동";   // 배열을 선언하면서 문자열을 초기화 가능
    cout << str << endl;       // 크기가 4('홍', '길', '동', '\0')

    char str2[20];
    // str2 = "김영희";        // 배열이름은 포인터처럼 동작하지만 주소 자체를 변경할 수 없음
    strcpy(str2, "김영희");    // 직접 대입이 아닌 문자 단위로 복사해야함!
    cout << str2 << endl;

    char str3[20];
    //char* str3;                 // 1. 사용불가하나 2.방법으로 사용 가능
    cout << "이름입력 >> ";
    cin >> str3;
    cout << "이름 : " << str3 << endl;
    // 2. const 사용하여 상수 저장
    const char* name;           // 포인터를 사용해서 문자열연결 하는 방법
    name = "김철수";            // const 사용해야 저장가능
    cout << name << endl;

    return 0;
}
