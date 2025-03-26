/*
*	 DB 연결
*/

#include<iostream>
#include <mysql/jdbc.h>	 // 지정범위 안해도 됨.

using namespace std;
using namespace sql;

int main() {
	const string server = "tcp://127.0.0.1:3306";
	const string username = "root";
	const string password = "12345";
	const string database = "testDB";

	try {
		mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();		// 포인터 드라이버
		unique_ptr<Connection> conn(driver->connect(server, username, password));	// driver 통해 con메소드 연결
		Connection* con;

		conn->setSchema(database);
		
		cout << "MySQL Connection success!!" << endl;			// 연결이 됐다면
	}	
	catch (SQLException& e) {								// 연결 안됐다면
		cerr << "MySQL Connection failed!!" << e.what() << endl;
	}

	return 0;
}