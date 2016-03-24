######################################################################
# Automatically generated by qmake (3.0) Thu Feb 11 23:01:11 2016
######################################################################

OBJECTS_DIR     = build/objects

QMAKE_CC        = clang
QMAKE_CXX       = clang++
QMAKE_LINK      = clang++
QMAKE_CXXFLAGS  = -std=c++11
MOC_DIR         = build/moc
UI_DIR          = build/ui

QT              +=  core gui widgets network
unix:LIBS       += -L/usr/lib/x86_64-linux-gnu/ \
                    -L$(HOME)/Qt/5.5/gcc_64/lib \
                    -L$(VIRTUAL_ENV)/lib

LIBS            += -lboost_system -lcrypto -ldblclient

DESTDIR         = bin
TEMPLATE        = app
TARGET          = dbl-gui
INCLUDEPATH     += . src src/mainwindow \
                     $(MOC_DIR) $(HOME)/Qt/5.5/gcc_64/include/ ../service/src \
                     $(VIRTUAL_ENV)/include

# Input
HEADERS         += src/gen/ui_mainwindow.h src/mainwindow/mainwindow.hxx
FORMS           += src/ui/mainwindow.ui
SOURCES         += src/main.cxx \
                    src/mainwindow/mainwindow.cxx \
                    src/runtime.cxx \
                    src/sys/command.cxx
