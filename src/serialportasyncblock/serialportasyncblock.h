#ifndef QTSERIALPORTASYNCBLOCK_H
#define QTSERIALPORTASYNCBLOCK_H

#include <QSerialPort>
#include <QByteArray>
#include <QTimer>
#include "serialportasyncblock_global.h"

class QSerialPortAsyncBlockPrivate;

class QTSERIALPORTASYNCBLOCK_EXPORT QSerialPortAsyncBlock : public QSerialPort
{
    Q_OBJECT
public:
    QSerialPortAsyncBlock(QObject *parent = Q_NULLPTR);
    void sendAndReceive(QByteArray dataSend, QByteArray* pDataReceive);
    void setReadTimeout(int iMsFirstByte, int iMsBetweenTwoBytes);
    void setBlockLenReceive(int iBlockLenReceive);
    void setBlockEnd(QByteArray endBlock);
signals:
    void IoFinished();

public slots:

private slots:
    void onTimeout();
    void onReadyRead();

private:
    QTimer m_timeoutTimer;

    QSerialPortAsyncBlockPrivate *d_ptr;
    Q_DECLARE_PRIVATE(QSerialPortAsyncBlock)
};

#endif // QTSERIALPORTASYNCBLOCK_H
