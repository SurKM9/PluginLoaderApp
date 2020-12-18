#ifndef PLUGINA_H
#define PLUGINA_H

#include <QObject>
#include "../LoaderApp/interfaces/Device.h"

class PluginA : public QObject, public Device
{
        Q_OBJECT
        Q_PLUGIN_METADATA(IID "com.company.PluginA")
        Q_INTERFACES(Device)

    public:

        explicit PluginA(QObject* parent = nullptr);

        // Device interface
        virtual void start() override;
        virtual void stop() override;
};
#endif // PLUGINA_H
