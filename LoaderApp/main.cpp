#include <QCoreApplication>
#include "pluginloader.h"
#include "interfaces/Device.h"

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    QString path = a.applicationDirPath();
    path += "/plugins/libPluginA.so.1.0.0";

    PluginLoader loader;
    Device* device = loader.load(path);

    device->start();
    device->stop();

    return a.exec();
}
