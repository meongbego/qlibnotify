#-------------------------------------------------
#
# Project created by QtCreator 2013-03-21T14:36:27
#
#-------------------------------------------------

QT       += core gui

# To support for pkg-config
CONFIG += link_pkgconfig
PKGCONFIG += libnotify

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = libnotify_sample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
