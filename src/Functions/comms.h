#ifndef COMMS_H
#define COMMS_H


#include <QObject>

class Comms : public QObject
{
    Q_OBJECT
public:
    explicit Comms(QObject *parent = nullptr);

    Q_INVOKABLE QString getText1();
    Q_INVOKABLE QString getText2();
signals:
    void doubleValuesChanged(double value1, double value2);
public slots:
    void receiveTextInput(const QString &input1, const QString &input2, const QString &input3);

private:
    QString inputValue1;
    QString inputValue2;
    QString inputValue3;
    QString outputValue1;
    QString outputValue2;

public:
    const QString& getInputValue1() const { return inputValue1; }
    const QString& getInputValue2() const { return inputValue2; }
    const QString& getInputValue3() const { return inputValue3; }

};

#endif // COMMS_H
