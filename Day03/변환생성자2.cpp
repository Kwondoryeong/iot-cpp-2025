/*
	��ȯ������2
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time() {}				// ����Ʈ ������
	Time(int abssec) {		// ��ȯ ������
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}
	void printTime() {
		printf("����ð��� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
	}
};
int main() {
	Time now(9999);
	now.printTime();

	Time now2 = 9999;	// now2 Time Ÿ���� ��ȯ��
	now2.printTime();

	return 0;
}