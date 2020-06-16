include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        IKeypad.h \
        ILatch.h \
        lockcontroller.h \
        tst_testdivisionbyzero.h

SOURCES += \
        _test.cc \
        lockcontroller.cpp \
        main.cpp

SUBDIRS += \
    Project.pro
