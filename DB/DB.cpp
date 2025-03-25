#include<iostream>
#include <mysql/jdbc.h>

using namespace std;
using namespace sql;

int main() {
	try {
		mysql::MySQL_Driver* driver;
		Connection* con;

		driver = mysql::get_mysql_driver_instance();		// 드라이버 인터페이스 생성
		con = driver->connect("tcp://127.0.0.1:3306", "madang", "12345");	// driver : 포인터 이므로->
		con->setSchema("madang");
		cout << "Connection successful!!" << endl;			// 연결이 됐다면
	}	
	catch (SQLException& e) {								// 연결 안됐다면
		cerr << "MySQL Connection failed!!" << e.what() << endl;
	}

	return 0;
}