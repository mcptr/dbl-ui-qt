#ifndef DBLUI_MAINWINDOW_HXX
#define DBLUI_MAINWINDOW_HXX

#include <QMainWindow>
#include <memory>

#include <dblclient/session.hxx>


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
	void on_applyAllButton_released();

private:
	Ui::MainWindow *ui;
	std::unique_ptr<dblclient::Session> dbl_session_ptr_;

	void closeEvent(QCloseEvent* event);
	void initialize();
	void saveSettings();
};

#endif // MAINWINDOW_H
