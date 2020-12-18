#ifndef PLUGINLOADER_H
#define PLUGINLOADER_H

#include <QObject>
#include <QPluginLoader>

#include "interfaces/Device.h"



class PluginLoader : public QObject
{
        Q_OBJECT

    public:

        explicit PluginLoader(QObject* parent = nullptr);

        Device* load(const QString& path);

    private:

        QPluginLoader* m_pluginLoader;
};

#endif // PLUGINLOADER_H
