/*
*	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*	�θ� Ŭ������ �����ڴ� �ݵ�� ���� ȣ��Ǹ�, �ʱ�ȭ ����Ʈ���� ��������� ȣ�� ����.
*	const, ����(&), private ��� ������ �ݵ�� �ʱ�ȭ ����Ʈ���� �ʱ�ȭ�ؾ� ��.
*	�θ� Ŭ������ �⺻ �����ڰ� ������, �ڽ� Ŭ�������� �ݵ�� �θ� �����ڸ� ȣ���ؾ� ��.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car(int ag) : gasolineGauge(ag) {}			// �ݷ� �ʱ�ȭ
	int getGasGauge() { return gasolineGauge; }
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) { }
	int getElecGauge() { return electricGauge; }
};
class HybridWaterCar : public HybridCar {	// Car�� �Ӽ��� �������� HybridCar�� �Ӽ��� �����޾ұ� ������
	int waterGauge;							// Car, HybridCar �ΰ� �Ӽ� ��� �־�� ��
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}		
	void showGauge() {
		cout << "�ܿ� ���ָ�: " << getGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << getElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	}
};

int main() {
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}