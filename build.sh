#!/bin/sh

QT_BINDIR="$HOME/Devel/Qt/5.5/gcc_64/bin"
UIC_BIN="$QT_BINDIR/uic"
QMAKE_BIN="$QT_BINDIR/qmake"
MOC_BIN="$QT_BINDIR/moc"

MOC_DIR="build/moc"

$QMAKE_BIN -Wall -recursive
$UIC_BIN src/ui/mainwindow.ui -o src/gen/ui_mainwindow.h
$MOC_BIN src/mainwindow/mainwindow.hxx -o $MOC_DIR/moc_mainwindow.cxx
$MOC_BIN src/client/worker.hxx -o $MOC_DIR/moc_worker.cxx

# cd ../service
# scons -j4 --with-tests
# cd -

make -j4
