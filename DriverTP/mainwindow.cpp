#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QComboBox>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpinBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    ,
      ui(new Ui::MainWindow),
    m_serialPortLabel(new QLabel(tr("Serial port:"))),
    m_serialPortComboBox(new QComboBox),
    m_waitResponseLabel(new QLabel(tr("Wait response, msec:"))),
    m_waitResponseSpinBox(new QSpinBox),
    m_requestLabel(new QLabel(tr("Request:"))),
    m_requestLineEdit(new QLineEdit(tr("Who are you?"))),
    m_trafficLabel(new QLabel(tr("No traffic."))),
    m_statusLabel(new QLabel(tr("Status: Not running."))),
    m_runButton(new QPushButton(tr("Start")))
{
    ui->setupUi(this);
    driver = new driver();
}

MainWindow::~MainWindow()
{
    driver -> closePort();
    delete ui;
}
void MainWindow :: button_ON_1_click()
{
    driver-> write(ui->MessageLineEdit->text());
}

void MainWindow :: button_ON_2_click()
{
    driver -> closePort();
    ui -> statusLabel-> setText();
}

void MainWindow :: button_ON_3_click()
{
    driver -> read();
}


