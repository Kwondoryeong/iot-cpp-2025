# iot-cpp-2025
C++

## 1일차
- 객체지향언어 : 대규모 팀 프로젝트 개발에 최적화 > 클래스
- 입출력 연산자
	- `cout` : 출력을 담당하는 객체
	- `cin`  : 입력을 담당하는 객체
- `namespace` : [C++](./Day01/namesp.cpp) 이름 충돌을 방지하기 위한 방법으로 다른 이름 공간을 만들어서 구분
	- 관련된 함수나 클래스, 변수들을 하나의 이름 공간으로 묶는 방법
	- 서로 다른 namespace에 동일한 이름의 함수나 변수가 있을 경우, 충돌 없이 사용 가능
- `Refernce`(참조자) : [C++](./Day01/)
	- [C++](./Day01/ref3.cpp) **선언시 초기화 필수** <상수, 참조자>
	- 다른 함수에 선언된 지역변수의 값을 바꾸는 방법
	- 보이지 않는 포인터, 변수이름에 또다른 이름을 주는 것
	- 메모리를 사용하지 않아 효율적, 포인터 변수의 경우 주소를 저장할 메모리공간 할당 필요(스택영역 4btye)
	- 상수 참조 : [C++](./Day01/ref5.cpp)
		- lvalue 참조자 > 변수 
		- rvalue 참조자 > 상수, 변수 (상수 참조 시 const참조) [C++](./Day01/ref4.cpp)
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
- `class`(클래스) : [C++](./Day01/st_c3.cpp) 사용자가 만든 자료형 
	
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

## 2일차
- `class` 구성요소 3가지
	1. 접근제어 지시자(private, public, protected : 접근 제어 범위) 
		- 디폴드 값 : private
	2. 멤버 변수 - 속성을 멤버 변수로 선언
		- private 영역 
	3. 멤버 함수(메서드) - 기능 구현
		- public 영역
- 초기화 시키는 함수
	- 생성자 : [C++](./Day02/class3.cpp)객체를 생성하면서 초기값 함께 줄 수 있음 (클래스이름과 동일한 메서드 모양)
		- 생성자 호출로 객체 생성
		- 객체 생성시 구조에 맞는 생성자가 없으면 객체 미생성
		- 초기화 기능에 사용
		- 오버로딩 가능
		- 생성자를 작성하면 더 이상 디폴트 생성자는 제공되지 않음
		- default 생성자 : 입력을 가지지 않는 생성자
		- 복사 생성자도 디폴트로 제공
		- [C++](./Day02/init4.cpp) 콜론 초기화, 이니셜라이져 리스트 > `생성자(매개변수) ':' 멤버변수(매개변수)` {}
	- 소멸자 : 객체를 소멸 시킴. 디폴트로 자동 호출되므로 동적 할당한 경우 아니면 별도 작성하지 않아도 됨!
		- 사용방법 : 생성자 맨 앞에 ~ 붙일 것
		- [C++](./Day02/MyClass3.cpp) new 사용하여 메모리 동적 할당 받은 후 delete를 소멸자안에서 사용
		'''c
		MyClass() {} 	// 생성자
		~MyClass() {	// 소멸자
			delete[] p	// 포인터 배열 p 메모리 반환
		}
		'''
- 객체, 인스턴스 차이
	- 객체 : 클래스(Class)로부터 만들어진 모든 실체(메모리에 존재하는 것)를 의미
	- 인스턴스 : 특정 클래스의 객체를 가리킬 때 사용되는 용어 > 어떤 클래스에서 만들어진 객체라고 표현하고 싶을 때
	'''c
		class A{}
		A obj // 클래스A의 객체obj 생성 == obj는 클래스A의 인스턴스 (어떤 객체가 특정 클래스의 인스턴스)
	'''
	- 클래스에 중점을 두고 접근하면 인스턴스
	- 객체를 생성하기 위해 생성자가 호출됨
	- 
- 문자열 정리 : [C++](./Day02/문자열처리하기.cpp)

- 변수 초기화 : [C++](./Day02/init.cpp) 
	- [C++](./Day02/init3.cpp) 생성자 초기화 3가지 방법
		- 복사 초기화
		- 직접 초기화
		- 콜론초기화, 이니셜라이져 리스트(Initializer List)
- 상수 초기화 : [C++](./Day02/init4.cpp)
	- **선언과 동시에 초기화!** <상수, 참조자>

## 3일차
- 복사 생성자(Copy Constructor) : [C++](./Day03/copyconstructor3.cpp)
	- 디폴트 복사 생성자 제공
	- 얕은 복사시 참조하고 있던 객체가 소멸되면 힙 메모리 공간 사라짐 > 존재하지 않는 힙 영역을 가리키게됨 > 깊은 복사로 해결
	- 깊은 복사시 새로운 힙 영역을 할당받아서 복사 : 메모리 동적 할당 받은 경우 사용!
- 변환 생성자 : 다른 타입의 객체로 변환될 때 호출되는 생성자
	- [C++](./Day03/변환생성자.cpp) 입력을 한개만 가지는 생성자 
	- [C++](./Day03/변환생성자3.cpp) 암묵적인 변환을 허용하지 않는 변환 생성자
- 이동 생성자(Move Constructor) : [C++](./Day03/moveCon2.cpp) 함수명(클래스명&& other) noexcept {} 형태
	- r-value reference 를 파라미터로 갖는 이동 생성자
	- 참조해야할 객체의 데이터가 이동되므로 복사 생성자보다 효율적
- 연산자 오버로딩(다중정의) : [C++](./Day03/operator.cpp)

## 4일차
- 연산자 오버로딩(다중정의) : 생성자, 함수 오버로딩 다형성 대표기법
	-연산자 오버로딩 : [C++](./Day04/operator4.cpp) || [C++](./Day04/operator7.cpp)
	- friend 키워드 사용 : [C++](./Day04/operator8.cpp)
		- 클래스 안에 friend 함수 원형을 선언해야 private 또는 protected 멤버 접근 가능(전역 함수 사용 가능)
- 템플릿 : 다형성과 재활용
	- 함수 템플릿
	- 템플릿 매개변수 2개
- 매크로 함수와 인라인 비교 : 매크로는 전처리기가 처리, inline 함수는 컴파일러가 처리!
	- 매크로함수 : #이 붙으면 컴파일러 아닌 전처리기가 처리하기 때문에 간단한 매크로 함수는 속도 빠름
	- 인라인 : 함수의 호출을 실제 코드에 삽입하는 방식으로 성능을 최적화 (컴파일러가 알아서)

## 5일차
- 상속(Inheritance) : [C++](./Day05/inheritance.cpp) 부모(슈퍼=상위=기초=베이스)클래스, 자식(서브=하위=파생=드라이버드)클래스
	- private, public, 상속관련 접근 지시자 : protected
	- is a(무엇은 무엇이다.), has a (소유)관계가 성립해야 한다.
	- 무엇(포함할 수 있는 관계) O / 학생은 책을 가지고 있다 O
	- 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화 한다
	  
	- [C++](./Day05/inheritance2.cpp) 부모의 접근제어자 : protected 변경시 자식 클래스에서 속성 값 접근 허용 
	- [C++](./Day05/inheritance3.cpp) 상속관계에서 이니셜라이즈 사용하기
		- 부모 클래스의 생성자는 반드시 먼저 호출되며 초기화 리스트에서 명시적으로 호출 가능
		- const, 참조(&), private 멤버 변수는 반드시 초기화 리스트에서 초기화해야 함
		- 부모 클래스에 기본 생성자가 없으면 자식 클래스에서 반드시 부모 생성자를 호출해야 함
	- [C++](./Day05/inheritance4.cpp) 상속 관계에서 객체 생성 및 소멸 
		- 객체를 생성하면 부모 클래스부터 차례대로 생성자가 호출되지만 생성자의 실행 순서는 자식 클래스에서 부모 클래스로 진행
		- 객체 생성 시 부모 클래스 생성자가 먼저 실행된 후, 자식 클래스 생성자가 실행됨
		- 객체 소멸 시 자식 클래스 소멸자가 먼저 실행된 후, 부모 클래스 소멸자가 실행됨

- 객체 포인터(Object Point) : [C++](./Day05/objPointer.cpp) 클래스(또는 구조체)의 객체를 가리키는 포인터 
	-객체의 주소를 저장하고, 해당 주소를 통해 객체의 멤버(변수, 함수)에 접근할 수 있음
- 객체 동적 생성(Dynamic Object Creation) : [C++](./Day05/objPointer2.cpp) 타임(실행 시간)에 new 연산자를 사용하여 객체를 생성하는 것을 의미
	-이 방식은 프로그램이 실행될 때 필요한 만큼 객체를 생성하고, 필요하지 않을 때 삭제하여 메모리를 효율적으로 관리할 수 있도록 함
- 상속에서 객체 포인터 : [C++](./Day05/objPointer5.cpp) 부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅 됨
- 가상 함수(Virtual Function) : [C++](./Day05/virtual.cpp) 파생 클래스에서 재정의할 것을 약속받은 멤버 함수 (virtual 키워드 사용)
	virtual table이 만들어지고, dynamic binding으로 동작한다.
	- 객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한됨
	- 이때 오버라이딩된 파생 클래스의 멤버를 사용하기 위해서는 기초 클래스의 멤버 함수를 가상함수로 만들면 됨
	- 이것은 컴파일시 포인터형으로 바인딩 되지 못하고 런타임에서 포인터가 어떤 객체를 가리키고 있는지에 따라서 바인딩할 함수를 결정
- 가상 클래스(Virtual Class) : [C++](./Day05/virtual2.cpp) 순수 지정자를 가지는 메서드를 순수 가상 함수라 하며, 이 순수 가상 함수를 가지는 클래스
	- 추상클래스는 객체 생성 불가
	- [C++](./Day05/virtual3.cpp) 추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조 타입의 소멸자만 호출되어 메모리 누수가 발생
		- 따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도
		- 객체 생성 시 부모 생성자가 먼저 실행되며, 소멸자는 자식부터 실행됨
		- virtual이 선언된 함수는 부모 포인터를 통해 호출하면 자식의 오버라이딩된 함수가 실행
		- 부모 클래스의 소멸자는 virtual로 선언하지 않으면 동적 할당된 객체를 delete할 때 자식의 소멸자가 호출되지 않을 수 
	Upcasting을 해야 자식의 다형성

## 6일차
- dynamic cast
- const cast
- temp object
- 표준템플릿라이브러리(STL:Standard Template Library) - 템플릿:다형성
- 컨테이너(container) : 객체를 저장하고 관리하는 자료구조
- 컨테이너 종류 
	1. 시퀀스 컨테이너(Sequence Containers) : 데이터 순차적(선형적)으로 저장, vector, list, queue
	2. 연관 컨테이너(Associative Containers) : 일정한 규칙으로 저장, set, multiset, map, multimap
	3. 컨테이너 어댑터(Unordered Containers) : 변형, 

- 벡터 : 동적 크기를 가지는 배열 기반 컨테이너(순차 컨테이너 중 하나)
	- `<vector>` 헤더 파일 포함
	- 벡터 capacity는 메모리공간을 먼저 만들고 다차면 알아서 크기를 늘림
	- vector.begin(): begin()은 첫번째 주소 반환(포인터)
	- vector.end(): end()는 마지막의 다음 주소 반환(마지막 값은 반환은 end() -1)
	- vector.size(): 원소 크기(갯수)를 반환
	- capacity() : 벡터에 할당된 메모리 크기를 리턴 - v.size()와 다름
	- push_back(10) : 마지막 원소 뒤에 10을 추가한다.
	- v.insert(idx, val): idx번째 위치에 val을 넣는다.
	- insert(v.begin(), 1) : 1번자리에 v벡터의 첫번째 값 삽입
	- pop_back() : 맨 마지막 원소 제거

- C++, MySQL 연동
- Mysql Connector 설치
- url="https://dev.mysql.com/downloads/file/?id=537660"
- 다운 받은 Mysql Connector 파일들 program files에 넣기
- 프로젝트 - 속성
	- VC++ 디렉터리 - 포함 디렉터리 - `C:\Program Files\mysql-connector-c++-9.2.0-winx64\include` 추가
	- VC++ 디렉터리 - 라이브러리 디렉터리 - `C:\Program Files\mysql-connector-c++-9.2.0-winx64\lib64\vs14` 추가
	- 링커 - 입력 - 추가 종속성 - C:\Program Files\mysql-connector-c++-9.2.0-winx64\lib64\debug\vs14\에 있는 `mysqlcppconn.lib` 입력, 추가

- 3개의 동적라이브러리 파일을 프로젝트 파일에 복사
	- C:\Program Files\mysql-connector-c++-9.2.0-winx64\lib64 - `libcrypto-3-x64.dll`, `libssl-3-x64.dll` 2파일
	- C:\Program Files\mysql-connector-c++-9.2.0-winx64\lib64\debug - `mysqlcppconn-10-vs14.dll` 1파일

-[C++](./DB/DB.cpp) DB연결 코드 작성

```c++
	#include<iostream>
	#include <mysql/jdbc.h>

	using namespace std;
	using namespace sql;

	int main() {
		try {
			mysql::MySQL_Driver* driver;
			Connection* con;

			driver = mysql::get_mysql_driver_instance();		// 드라이버 인터페이스 생성
			con = driver->connect("tcp://127.0.0.1:3306", "madang", "12345");	// driver 포인터 이므로->
			con->setSchema("madang");
			cout << "Connection successful!!" << endl;			// 연결이 됐다면
		}	
		catch (SQLException& e) {								// 연결 안됐다면
			cerr << "MySQL Connection failed!!" << e.what() << endl;
		}

		return 0;
	}
```