#ifndef MAINWINDOW_HXX
#define MAINWINDOW_HXX

#include "net/iface.hxx"

#include <QMainWindow>
#include <memory>


namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	virtual ~MainWindow();


private slots:
    void on_networkInterface_currentIndexChanged(int idx);
    void on_applyAllButton_released();

    void on_disableServicePassword_toggled(bool checked);

private:
	Ui::MainWindow *ui;
	std::unique_ptr<adblocker::net::IfaceManager> iface_manager_;

	void initialize();
};

#endif // MAINWINDOW_H
