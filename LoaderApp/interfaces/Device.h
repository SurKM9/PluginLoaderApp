#ifndef DEVICE_H
#define DEVICE_H

#include <QString>
#include <QStringList>
#include <QtPlugin>

class Device
{
    public:

        virtual ~Device() = default;
        virtual void start() = 0;
        virtual void stop() = 0;
};

// declare an interface to use
#define iIterface_IID "com.company.Device/1.0"
Q_DECLARE_INTERFACE(Device, iIterface_IID)

#endif // DEVICE_H
