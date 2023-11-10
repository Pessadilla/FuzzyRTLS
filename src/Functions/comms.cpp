#include "comms.h"
#include "rtlsmodule.h"
#include "comms.h"
#include <QDebug>
#include <iostream>
#include <string.h>
using namespace std;

Comms::Comms(QObject *parent) : QObject(parent)
{
}

void Comms::receiveTextInput(const QString &input1, const QString &input2, const QString &input3)
{
    qDebug() << "Received TextInput 1:" << input1;
    qDebug() << "Received TextInput 2:" << input2;
    qDebug() << "Received TextInput 3:" << input3;

    inputValue1 = input1;
    inputValue2 = input2;
    inputValue3 = input3;

}

QString Comms::getText1()
{
    QString qString1 = inputValue1;
    QString qString2 = inputValue2;
    QString qString3 = inputValue3;
    double rssi1=qString1.toDouble();
    double rssi2=qString2.toDouble();
    double rssi3=qString3.toDouble();
    double n = RTLSModule::RTLS1(rssi1,rssi2,rssi3);
    QString qString = QString::number(n);
    return qString;
}

QString Comms::getText2()
{
    QString qString1 = inputValue1;
    QString qString2 = inputValue2;
    QString qString3 = inputValue3;
    double rssi1=qString1.toDouble();
    double rssi2=qString2.toDouble();
    double rssi3=qString3.toDouble();
    double n = RTLSModule::RTLS2(rssi1,rssi2,rssi3);
    QString qString = QString::number(n);
    return qString;
}
