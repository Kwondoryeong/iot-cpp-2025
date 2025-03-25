#include<iostream>
#include <mysql/jdbc.h>

using namespace std;
using namespace sql;

int main() {
	try {
		mysql::MySQL_Driver* driver;
		Connection* con;

		driver = mysql::get_mysql_driver_instance();		// ����̹� �������̽� ����
		con = driver->connect("tcp://127.0.0.1:3306", "madang", "12345");	// driver : ������ �̹Ƿ�->
		con->setSchema("madang");
		cout << "Connection successful!!" << endl;			// ������ �ƴٸ�
	}	
	catch (SQLException& e) {								// ���� �ȵƴٸ�
		cerr << "MySQL Connection failed!!" << e.what() << endl;
	}

	return 0;
}