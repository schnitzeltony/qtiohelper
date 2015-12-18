INCLUDEPATH += $$PWD

PUBLIC_HEADERS += \
    $$PWD/qspidevice_global.h \
    $$PWD/qspidevice.h

PRIVATE_HEADERS += \
    $$PWD/qspidevice_p.h

SOURCES += \
    $$PWD/qspidevice.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
