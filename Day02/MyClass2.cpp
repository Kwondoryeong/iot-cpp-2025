/*
    »ý¼ºÀÚ ¸¸µé±â
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
    MyClass2 obj(1, "±èÃ¶¼ö", 20);
    obj.printInfo();

    return 0;
}
