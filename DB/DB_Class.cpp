/*
	DB 연결 class로 구현
*/

#include<iostream>
#include<mysql/jdbc.h>

using namespace std;
using namespace sql;

#define	SERVER_IP	"210.119.12.60:3306"
#define USERNAME	"root"
#define PASSWORD	"1234"
#define DATABASE	"teamDB"

class MySQLConnector {
private:
	string server;
	string username;
	string password;
	string database;
	unique_ptr<Connection> conn;

public:
	MySQLConnector(const string& serv, const string& user, const string& pw, const string& db)
		: server(serv), username(user), password(pw), database(db) {
		try {
			mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
			conn = unique_ptr<Connection>(driver->connect(server, username, password));
			conn->setSchema(database);
			cout << "MySQL Connection success!!" << endl;
		}
		catch (SQLException& e) {
			cerr << "MySQL Connection Failed!!" << e.what() << endl;
		}
	}
	~MySQLConnector() {
		cout << "MySQL DisConnect" << endl;
	}
};

int main() {
	MySQLConnector db(SERVER_IP, USERNAME, PASSWORD, DATABASE);

	return 0;
}