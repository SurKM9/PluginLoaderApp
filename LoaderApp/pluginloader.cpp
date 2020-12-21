#include <QDebug>
#include "pluginloader.h"

PluginLoader::PluginLoader(QObject* parent) :
    QObject(parent),
    m_pluginLoader(nullptr)
{
}

Device* PluginLoader::load(const QString& path)
{
    // path need not contain .so or .dll suffixes
    m_pluginLoader = new QPluginLoader(path, this);

    qInfo() << "Loading plugin...";

    if(m_pluginLoader->load())
    {
        qInfo() << "Plugin loaded successfully...";

        Device* device = dynamic_cast<Device*>(m_pluginLoader->instance());
        return device;
    }

    qWarning() << "Plugin " << path << "failed to load..." << m_pluginLoader->errorString();
    return nullptr;
}
