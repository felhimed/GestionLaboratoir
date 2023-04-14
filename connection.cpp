#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnection()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_projet2A");
db.setUserName("felhi");//inserer nom de l'utilisateur
db.setPassword("12345678");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;


    return  test;
}

void Connection::closeconnection()
{  db.close();
}
