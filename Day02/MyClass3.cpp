/*
    name 메모리 동적 할당 받아 생성자 만들기
    소멸자 : 메모리 반환시 소멸자 안에서 delete 
*/
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

class MyClass3 {
private:
    int id;
    //char name[20];
    char* name;                             // 주소 저장하기 위해 char* 
    int age;
    
public:
    MyClass3() {}
    MyClass3(int _id, const char* _name, int _age);   // const형으로 하는 이유 : "김철수"가 문자열 리터럴 상수이기 때문
    void getData() const;
    
    ~MyClass3() {                       // 소멸자 : ('~' 틸트) 디폴트로 자동 호출됨 - 동적할당 경우 아니면 별도 작성x
        delete[] name;                  // 메모리 반환시 소멸자 안에 사용
    }
};
// class에서 빼내는 법 > 클래스명::(범위지정스코프)생성자or함수
MyClass3::MyClass3(int _id, const char* _name, int _age) {    
    id = _id;
    name = new char[strlen(_name) + 1]; // 동적 할당
    strcpy(name, _name);                // 배열 선언 후 대입 연산자를 사용하여 값을 직접 할당 불가
    age = _age;
}
                                        // 출력만 담당하기 때문에 속성값 변경을 막기 위해 const사용(상수화)
void MyClass3::getData() const {        // 상수 멤버 함수(모든 멤버들을 상수화 시킨다)
    cout << "ID: " << id << "\nName: " << name << "\nAge: " << age << endl;
    cout << "sizeof(김철수) : " << sizeof(name) << endl;
    // id=2; 
}

int main() {
    MyClass3 obj(1, "김철수", 20); 
    obj.getData();
  
   // delete &name;

    return 0;
}
