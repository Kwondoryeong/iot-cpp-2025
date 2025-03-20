/*
*	Banking Systemp Ver 0.2
*	�ۼ���: �ǵ���
*   ��  ��: Account Ŭ���� ����, ��ü ������ �迭 ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);			// �޴����
void MakeAccount(void);			// ���°����� ���� �Լ�
void DepositMoney(void);		// �Ա�
void WithdrawMoney(void);		// ���
void ShowAllAccInfo(void);		// �ܾ���ȸ

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };	// enum : ���� �ڷ��� �޴� ������ �������ְ� ���� 
														// switch ���� �Բ� ���� ����

class Account {
private:
    string accID;              // ���¹�ȣ�� string���� ����
    int balance;               // �ܾ�
    char* cusName;             // �� �̸�
public:
    // ������: accID�� string���� �ް�, �� �̸��� �������� �Ҵ�
    Account(const string& ID, int money, const char* name)
        : accID(ID), balance(money) {
        cusName = new char[strlen(name) + 1];
        strcpy(cusName, name);
    }

    // accID�� ��ȯ�ϴ� �Լ�
    string GetAccID() { return accID; }

    // �Ա� �Լ�
    void Deposit(int money) {
        balance += money;
    }

    // ��� �Լ� (�ܾ��� �����ϸ� 0 ��ȯ)
    int Withdraw(int money) {
        if (balance < money) {
            return 0;
        }
        balance -= money;
        return money;
    }

    // ���� ���� ��� �Լ�
    void ShowAccInfo() {
        cout << "����ID: " << accID << endl;  // ���� accID�� string
        cout << "��  ��: " << cusName << endl;
        cout << "��  ��: " << balance << endl;
    }

    // �Ҹ���: �������� �Ҵ�� �̸� �޸� ����
    ~Account() {
        delete[] cusName;
    }
};

// Account ������ ���� �迭�� ���� ����
Account* accArr[100];           // �ִ� 100���� ���¸� ����
int accNum = 0;                 // ����� ���� ��

// �޴� ��� �Լ�
void ShowMenu(void) {
    cout << "-----Menu-----" << endl;
    cout << "1. ���°���" << endl;
    cout << "2. ��    ��" << endl;
    cout << "3. ��    ��" << endl;
    cout << "4. �������� ��ü ���" << endl;
    cout << "5. ���α׷� ����" << endl;
}

// ���� ���� �Լ�
void MakeAccount(void) {
    string id;   // ���¹�ȣ�� string���� ����
    char name[100];
    int balance;

    cout << "[���°���]" << endl;
    cout << "����ID: ";
    cin >> id;   // ���¹�ȣ�� string���� �Է¹���
    cout << "��  ��: ";
    cin >> name;
    cout << "�Աݾ�: ";
    cin >> balance;
    cout << endl;

    // ���� ���� �� accArr�� ����
    accArr[accNum++] = new Account(id, balance, name);
}

// �Ա� �Լ�
void DepositMoney(void) {
    int money;
    string id;  // ���¹�ȣ�� string���� ����
    cout << " [��    ��]" << endl;
    cout << " ����ID: ";
    cin >> id;   // ���¹�ȣ�� string���� �Է¹���
    cout << "�Աݾ�: ";
    cin >> money;
    cout << endl;

    // ����ID�� ��ġ�ϴ� ���� ã��
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {  // ����ID ��
            accArr[i]->Deposit(money);      // accArr[i]�� ����Ű�� Account ��ü�� ���� ID ���� ��ȯ�մϴ�.
            cout << "�ԱݿϷ�" << endl << endl;
            return;
        }
    }

    // ����ID�� ��ȿ���� ������ ���� �޽��� ���
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

// ��� �Լ�
void WithdrawMoney(void) {
    int money;
    string id;  // ���¹�ȣ�� string���� ����
    cout << "[��    ��]" << endl;
    cout << "����ID: ";
    cin >> id;   // ���¹�ȣ�� string���� �Է¹���
    cout << "��ݾ�: ";
    cin >> money;
    cout << endl;

    // ����ID�� ��ġ�ϴ� ���� ã��
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == id) {  // ����ID ��
            if (accArr[i]->Withdraw(money) == 0) {  // ��� ���� (�ܾ� ����)
                cout << "�ܾ׺���" << endl << endl;
                return;
            }
            cout << "��ݿϷ�" << endl << endl;
            return;
        }
    }

    // ����ID�� ��ȿ���� ������ ���� �޽��� ���
    cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

// ��� ���� ���� ��� �Լ�
void ShowAllAccInfo(void) {
    // ����� ��� ���� ���� ���
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
        cout << endl;
    }
}

// ���� �Լ�
int main(void) {
    int choice;

    while (1) {
        ShowMenu();  // �޴� ���
        cout << "����: ";
        cin >> choice;  // �޴� ����
        cout << endl;

        // ���ÿ� ���� �۾� ����
        switch (choice) {
        case MAKE:
            MakeAccount();  // ���°���
            break;
        case DEPOSIT:
            DepositMoney();  // �Ա�
            break;
        case WITHDRAW:
            WithdrawMoney();  // ���
            break;
        case INQUIRE:
            ShowAllAccInfo();  // �������� ��ü ���
            break;
        case EXIT:
            // ���� �� �������� �Ҵ�� �޸� ����
            for (int i = 0; i < accNum; i++) {
                delete accArr[i];
            }
            return 0;  // ���α׷� ����
        default:
            cout << "Illegal selection.." << endl;  // ��ȿ���� ���� ����
        }
    }

    return 0;
}