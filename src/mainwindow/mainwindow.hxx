#ifndef DBLUI_MAINWINDOW_HXX
#define DBLUI_MAINWINDOW_HXX

#include "client/worker.hxx"

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

signals:
	void ui_initialized(const QString&, int);

private slots:
	void on_applyAllButton_released();
	void on_controlRestartButton_released();

	void on_connection_status(bool ok);
	void appendLog(const QString& msg);

private:
	Ui::MainWindow* ui_;
	dblui::Worker* worker_;
	//dblui::WorkerThread* worker_thread_;
	QThread* worker_thread_;

	void closeEvent(QCloseEvent* event);
	void saveSettings();

	void initialize();
	//void load_status();
};

#endif // MAINWINDOW_H
