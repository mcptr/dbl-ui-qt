#ifndef DBLUI_MAINWINDOW_HXX
#define DBLUI_MAINWINDOW_HXX

#include "client/worker.hxx"
#include "constants.hxx"

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
	void control_restart();

private slots:
	void on_applyAllButton_released();
	void on_controlRestartButton_released();

	void appendLog(const QString& msg);

	void handle_connection_status(dblui::ConnectionStatus);

	void handle_load_lists(dblui::OperationStatus);
	void handle_load_lists(const dblclient::types::DomainListsSet_t&);

	void handle_load_blocked_domains(dblui::OperationStatus);
	void handle_load_blocked_domains(const dblclient::types::DomainSet_t&);

	void handle_load_whitelisted_domains(dblui::OperationStatus);
	void handle_load_whitelisted_domains(const dblclient::types::DomainSet_t&);

private:
	Ui::MainWindow* ui_;
	dblui::Worker* worker_;
	QThread* worker_thread_;

	void closeEvent(QCloseEvent* event);
	void saveSettings();

	void initialize();
	//void load_status();
};

#endif // MAINWINDOW_H
