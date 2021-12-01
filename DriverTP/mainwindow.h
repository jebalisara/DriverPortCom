#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "driver.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Driver *driver;



private slots:
	void button_ON_1_click();
	void button_ON_2_click();
	void button_ON_3_click();
	

};
#endif // MAINWINDOW_H


