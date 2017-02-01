#-------------------------------------------------
#
# Project created by QtCreator 2017-02-01T18:03:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = andor_idus
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        andor_main.cpp

HEADERS  += andor_main.h \
    ATMCD32D.h


FORMS    += andor_main.ui



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./ -latmcd64m
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./ -latmcd64d
else:unix: LIBS += -L$$PWD/./ -latmcd64m

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

DISTFILES += \
    atmcd32d.lib \
    atmcd32m.lib \
    atmcd64m.lib \
    ATMCD32CS.dll \
    atmcd32d.dll \
    ATMCD64CS.dll \
    atmcd64d.dll
