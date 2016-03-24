#!/bin/sh

QT_BINDIR="$HOME/Qt/5.5/gcc_64/bin"
UIC_BIN="$QT_BINDIR/uic"
QMAKE_BIN="$QT_BINDIR/qmake"

$QMAKE_BIN -Wall -recursive
$UIC_BIN src/ui/mainwindow.ui -o src/gen/ui_mainwindow.h
make -j4
