#include "driver.h"
#include<QDebug>

int Driver::getStatus()
{ return status_a; }

Driver:: driver()
{
    status_a = off;
    message_a ="";
    indexFonctionnalite_m = 0;
}
void driver :: setMessage (QString message)
{
    message_a = message;
}
QString Driver:: getMessage()
{return message_a; }

void Driver::closePort()
{serial.close();}

void Driver:read()
{ char *message;
    message_m=message;
}

bool Driver::openPort(QString COM)
{
    serial.setPort.Naame(COM);

    serial.setBaudRate(QSerialPort::baud115200);

}
