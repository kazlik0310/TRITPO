QT       += core gui

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
    bikemenuwindow.cpp \
    bikerent.cpp \
    bikerepair.cpp \
    biketableform.cpp \
    carmenuwindow.cpp \
    carrent.cpp \
    carrepair.cpp \
    cartableform.cpp \
    editbikewindow.cpp \
    editcarwindow.cpp \
    edittruckwindow.cpp \
    inputbikewindow.cpp \
    inputcarwindow.cpp \
    inputtruckwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    truckmenuwindow.cpp \
    truckrent.cpp \
    trucktableform.cpp

HEADERS += \
    Algorithm.h \
    List.h \
    bike.h \
    bikemenuwindow.h \
    bikerent.h \
    bikerepair.h \
    biketableform.h \
    car.h \
    carmenuwindow.h \
    carrent.h \
    carrepair.h \
    cartableform.h \
    editbikewindow.h \
    editcarwindow.h \
    edittruckwindow.h \
    file.h \
    inputbikewindow.h \
    inputcarwindow.h \
    inputtruckwindow.h \
    mainwindow.h \
    truck.h \
    truckmenuwindow.h \
    truckrent.h \
    trucktableform.h \
    vehicle.h

FORMS += \
    bikemenuwindow.ui \
    bikerent.ui \
    bikerepair.ui \
    biketableform.ui \
    carmenuwindow.ui \
    carrent.ui \
    carrepair.ui \
    cartableform.ui \
    editbikewindow.ui \
    editcarwindow.ui \
    edittruckwindow.ui \
    inputbikewindow.ui \
    inputcarwindow.ui \
    inputtruckwindow.ui \
    mainwindow.ui \
    truckmenuwindow.ui \
    truckrent.ui \
    trucktableform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
