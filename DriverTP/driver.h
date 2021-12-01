#ifndef DRIVER_H
#define DRIVER_H


#include <QString>
#include <QSerialPortInfo>
#include <QSerialPort>


class Driver
{
private:
            QSerialPort serial;
            Estatus     status_m;
            QString     message_m;
            int         indexFonctionnalite_m;

public:
             Driver();
             enum Estatus
             {
                off = 0, on,
                reading,
                writting
             };
            void setMessage(QString message);
            QString getMessage(void);
            int getStatus(void);
            void read();
            void write(QString message_user);
            QStringList showCOM();


};

#endif // DRIVER_H
