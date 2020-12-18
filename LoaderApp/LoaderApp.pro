QT -= gui

CONFIG += c++11 console file_copies
CONFIG -= app_bundle

COPIES += plugins

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
        pluginloader.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    interfaces/Device.h \
    pluginloader.h

## copies the libPluginA.so.1.0.0 to a dedicated plugins folder inside the loaderapp
plugins.files = $$files($$OUT_PWD/../PluginA/libPluginA.so.1.0.0)
plugins.path = $$OUT_PWD/plugins
