/*
*	상속관계에서 이니셜라이즈 사용하기
*	부모 클래스의 생성자는 반드시 먼저 호출되며, 초기화 리스트에서 명시적으로 호출 가능.
*	const, 참조(&), private 멤버 변수는 반드시 초기화 리스트에서 초기화해야 함.
*	부모 클래스에 기본 생성자가 없으면, 자식 클래스에서 반드시 부모 생성자를 호출해야 함.
*/

#include <iostream>
#include <string.h>

using namespace std;

class Car {
private:
	int gasolineGauge;
public:
	Car(int ag) : gasolineGauge(ag) {}			// 콜론 초기화
	int getGasGauge() { return gasolineGauge; }
};

class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGauge(ae) { }
	int getElecGauge() { return electricGauge; }
};
class HybridWaterCar : public HybridCar {	// Car의 속성을 물려받은 HybridCar의 속성을 물려받았기 때문에
	int waterGauge;							// Car, HybridCar 두개 속성 모두 있어야 함
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}		
	void showGauge() {
		cout << "잔여 가솔린: " << getGasGauge() << endl;
		cout << "잔여 전기량: " << getElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main() {
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}