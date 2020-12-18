#include <QDebug>
#include "PluginA.h"

PluginA::PluginA(QObject* parent)
{
    Q_UNUSED(parent);
    qInfo() << "Plugin created...";
}

void PluginA::start()
{
    qInfo() << "Plugin started...";
}

void PluginA::stop()
{
    qInfo() << "Plugin stopped...";
}
