QT       += core gui
QT       += sql
QT       += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addhw.cpp \
    addstu.cpp \
    addtea.cpp \
    administrator.cpp \
    cal.cpp \
    circuit.cpp \
    createDB.cpp \
    ed.cpp \
    hwdetail.cpp \
    main.cpp \
    mainwindow.cpp \
    physics.cpp \
    ps.cpp \
    stu.cpp \
    tea.cpp \
    updatehw.cpp \

HEADERS += \
    addhw.h \
    addstu.h \
    addtea.h \
    administrator.h \
    cal.h \
    circuit.h \
    createDB.h \
    ed.h \
    hwdetail.h \
    mainwindow.h \
    physics.h \
    ps.h \
    stu.h \
    tea.h \
    updatehw.h \

FORMS += \
    addhw.ui \
    addstu.ui \
    addtea.ui \
    administrator.ui \
    cal.ui \
    circuit.ui \
    ed.ui \
    hwdetail.ui \
    mainwindow.ui \
    physics.ui \
    ps.ui \
    stu.ui \
    tea.ui \
    updatehw.ui \

TRANSLATIONS += \
    HomeworkManager_zh_CN.ts \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
