#include <iostream>
#include "mysql_driver.h"
#include<cppconn/statement.h>

using namespace std;

int main()
{
    sql::mysql::MySQL_Driver *driver=NULL;
    sql::Connection *con=NULL;
    sql::Statement *statem=NULL;


    driver = sql::mysql::get_driver_instance();
    con= driver->connect("localhost","root","sex");

    statem=con->createStatement();
    statem->executeQuery("use store");

    delete statem;
    delete con;

}
llllkkkk




