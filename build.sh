#!/bin/sh

qmake -Wall -recursive
uic src/ui/mainwindow.ui -o src/gen/ui_mainwindow.h
make
