# iot-cpp-2025
C++

## 1일차
- 객체지향언어 : 대규모 팀 프로젝트 개발에 최적화 > 클래스
- 입출력 연산자
	- `cout` : 출력을 담당하는 객체
	- `cin` : 입력을 담당하는 객체
- `namespace` : [C++](./Day01/namesp.cpp) 이름 충돌을 방지하기 위한 방법으로 다른 이름 공간을 만들어서 구분
	- 관련된 함수나 클래스, 변수들을 하나의 이름 공간으로 묶는 방법
	- 서로 다른 namespace에 동일한 이름의 함수나 변수가 있을 경우, 충돌 없이 사용 가능
- `Refernce`(참조자) : [C++](./Day01/)
	- 선언시 초기화 필수 : [C++](./Day01/ref3.cpp)
	- 다른 함수에 선언된 지역변수의 값을 바꾸는 방법
	- 보이지 않는 포인터, 변수이름에 또다른 이름을 주는 것
	- 메모리를 사용하지 않아 효율적, 포인터 변수의 경우 주소를 저장할 메모리공간 할당 필요(스택영역 4btye)
	- 상수 참조 : [C++](./Day01/ref5.cpp)
		- lvalue 참조자 > 변수
		- rvalue 참조자 > 상수 (rvalue 변수도 가능은 함) [C++](./Day01/ref4.cpp)
- `new`(생성자) :[C++](./Day01/new2.cpp) 객체를 생성하고, 초기화시키는 기능을 가지는 특별한 메서드
	- new는 생성자 호출이 되므로 초기화 가능
	- 객체 생성 시 자동 호출
- `delete`(소멸자) : [C++](./Day01/new2.cpp)
	- 객체가 소멸될 때 자동 호출되는 메서드
- `default` : [C++](./Day01/default2.cpp)
	- default 매개변수 여러개 사용시 맨 오른쪽부터 순서 적용
	- [C++](./Day01/default.cpp) 입력이 없을시 디폴트 매개변수 적용
	- [C++](./Day01/default3.cpp) 함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을 때 입력없는 함수 호출시 문제 발생
- `struct`(구조체) : [C++](./Day01/st_c2.cpp) 멤버변수 + 멤버함수(구조체 멤버이므로 .연산자로 접근 가능)
	```c
	typedef struct human{
		char name[20];
		int age;
		char job[10];

		void showHuman() {
			printf("name: %s, age: %d, job: %s", name, age, job);	// 구조체 안으로 들어갔기 때문에 .으로 접근할 필요 없음
		}
	} Human;
	```
- 클래스 : [C++](./Day01/st_c3.cpp) 사용자가 만든 자료형 
	```c
	class Human {
	public:
		char name[20];
		int age;
		char job[10];
		// 생성자 호출
		Human(char name) {		// 디폴트 생성자
			
		}
		void showHuman() {
			printf("name: %s, age: %d, job: %s", name, age, job);	// 구조체 안으로 들어갔기 때문에 접근할 필요 없음
		}
	};
	```
- this 포인터 : 객체 자기자신을 가리키는 포인터
- 함수 다형성
	- OverLoading : [C++](./Day01/overloading.cpp) 함수의 다중정의 > 동일한 함수명이나 매개변수의 타입과 개수가 다르면 다른 함수
	- OverRiding : 함수의 재정의 -> 상속
	- C++ 함수 구분
		- 함수명 같아도 되나 매개변수까지 같아야 동일 함수 취급
		- 매개변수 타입 및 개수가 달라야 함 > 오버로딩 가능한 이유
