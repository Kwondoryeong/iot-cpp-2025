/*
*	Banking Systemp Ver 0.2
*	작성자: 권도형
*   내  용: Account 클래스 정의, 객체 포인터 배열 적용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);			// 메뉴출력
void MakeAccount(void);			// 계좌개설을 위한 함수
void DepositMoney(void);		// 입금
void WithdrawMoney(void);		// 출금
void ShowAllAccInfo(void);		// 잔액조회

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };	// enum : 열거 자료형 메뉴 선택을 가독성있게 열거 
														// switch 문과 함께 쓰면 좋음

class Account {
private:
    string accID;              // 계좌번호를 string으로 변경
    int balance;               // 잔액
    char* cusName;             // 고객 이름
public:
    // 생성자: accID를 string으로 받고, 고객 이름을 동적으로 할당
    Account(const string& ID, int money, const char* name)
        : accID(ID), balance(money) {
        cusName = new char[strlen(name) + 1];
        strcpy(cusName, name);
    }

    // accID를 반환하는 함수
    string GetAccID() { return accID; }

    // 입금 함수
    void Deposit(int money) {
        balance += money;
    }

    // 출금 함수 (잔액이 부족하면 0 반환)
    int Withdraw(int money) {
        if (balance < money) {
            return 0;
        }
        balance -= money;
        return money;
    }

    // 계좌 정보 출력 함수
    void ShowAccInfo() {
        cout << "계좌ID: " << accID << endl;  // 이제 accID는 string
        cout << "이  름: " << cusName << endl;
        cout << "잔  액: " << balance << endl;
    }

    // 소멸자: 동적으로 할당된 이름 메모리 해제
    ~Account() {
        delete[] cusName;
    }
};

// Account 저장을 위한 배열과 계좌 개수
Account* accArr[100];           // 최대 100개의 계좌를 저장
int accNum = 0;                 // 저장된 계좌 수

// 메뉴 출력 함수
void ShowMenu(void) {
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입    금" << endl;
    cout << "3. 출    금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
}

// 계좌 개설 함수
void MakeAccount(void) {
    string id;   // 계좌번호를 string으로 수정
    char name[100];
    int balance;

    cout << "[계좌개설]" << endl;
    cout << "계좌ID: ";
    cin >> id;   // 계좌번호를 string으로 입력받음
    cout << "이  름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> balance;
    cout << endl;

    // 계좌 생성 후 accArr에 저장
    accArr[accNum++] = new Account(id, balance, name);
}

// 입금 함수
void DepositMoney(void) {
    int money;
    string id;  // 계좌번호를 string으로 수정
    cout << " [입    금]" << endl;
    cout << " 계좌ID: ";
    cin >> id;   // 계좌번호를 string으로 입력받음
    cout << "입금액: ";
    cin >> money;
    cout << endl;

    // 계좌ID가 일치하는 계좌 찾기
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {  // 계좌ID 비교
            accArr[i]->Deposit(money);      // accArr[i]가 가리키는 Account 객체의 계좌 ID 값을 반환합니다.
            cout << "입금완료" << endl << endl;
            return;
        }
    }

    // 계좌ID가 유효하지 않으면 오류 메시지 출력
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

// 출금 함수
void WithdrawMoney(void) {
    int money;
    string id;  // 계좌번호를 string으로 수정
    cout << "[출    금]" << endl;
    cout << "계좌ID: ";
    cin >> id;   // 계좌번호를 string으로 입력받음
    cout << "출금액: ";
    cin >> money;
    cout << endl;

    // 계좌ID가 일치하는 계좌 찾기
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {  // 계좌ID 비교
            if (accArr[i]->Withdraw(money) == 0) {  // 출금 실패 (잔액 부족)
                cout << "잔액부족" << endl << endl;
                return;
            }
            cout << "출금완료" << endl << endl;
            return;
        }
    }

    // 계좌ID가 유효하지 않으면 오류 메시지 출력
    cout << "유효하지 않은 ID 입니다." << endl << endl;
}

// 모든 계좌 정보 출력 함수
void ShowAllAccInfo(void) {
    // 저장된 모든 계좌 정보 출력
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}

// 메인 함수
int main(void) {
    int choice;

    while (1) {
        ShowMenu();  // 메뉴 출력
        cout << "선택: ";
        cin >> choice;  // 메뉴 선택
        cout << endl;

        // 선택에 따른 작업 수행
        switch (choice) {
        case MAKE:
            MakeAccount();  // 계좌개설
            break;
        case DEPOSIT:
            DepositMoney();  // 입금
            break;
        case WITHDRAW:
            WithdrawMoney();  // 출금
            break;
        case INQUIRE:
            ShowAllAccInfo();  // 계좌정보 전체 출력
            break;
        case EXIT:
            // 종료 시 동적으로 할당된 메모리 해제
            for (int i = 0; i < accNum; i++) {
                delete accArr[i];
            }
            return 0;  // 프로그램 종료
        default:
            cout << "Illegal selection.." << endl;  // 유효하지 않은 선택
        }
    }

    return 0;
}