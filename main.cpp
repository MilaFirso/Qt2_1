#include <QCoreApplication>
#include <QSqlDatabase>
#include <QHostInfo>
#include <QtNetwork>
#include <QtSql>




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //sql
        qDebug() << "sql:";
        QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
        db.setHostName("localhost");
        db.setDatabaseName("TestDB");
        db.setUserName("Test");
        db.setPassword("Test");
        bool ok = db.open();
        qDebug() << "BD conect:" << ok;

        //Network
        qDebug() << "\nNetwork:";
        QHostInfo info = QHostInfo::fromName("qt-project");
        QString HostName = info.hostName();
        qDebug() << "HostName:" << HostName;
        qDebug() << "LocalHost:" << QHostInfo::localHostName();
}
