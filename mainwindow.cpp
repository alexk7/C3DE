#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qsettings.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	
	ui->code->setPlainText(QSettings{}.value("code").toString());
	
	connect(ui->code, &QPlainTextEdit::textChanged, [=] {
		QSettings{}.setValue("code", ui->code->toPlainText());
	});
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_actionRun_triggered()
{
	auto output = ui->output;
	output->appendPlainText("Hello, world!");
}
