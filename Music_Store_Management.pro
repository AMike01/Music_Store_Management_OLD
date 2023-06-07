
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Music_Store_Management
TEMPLATE = app

SOURCES += mainwindow.cpp \
    loginwindow.cpp \
    modifyproductwindow.cpp \
    newproductwindow.cpp \
    list.cpp \
    product.cpp \
    CD.cpp \
    tape.cpp \
    vynil.cpp \
    visitor.cpp \
    admin.cpp \
    user.cpp
    
HEADERS  += mainwindow.h \
    loginwindow.h \
    modifyproductwindow.h \
    newproductwindow.h \
    list.h \
    product.h \
    CD.h \
    tape.h \
    vynil.h \
    visitor.h \
    admin.h \
    user.h 
    
FORMS    +=

RESOURCES += \
