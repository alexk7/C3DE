#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QCoreApplication::setOrganizationName("c3lang.org");
	QCoreApplication::setOrganizationDomain("c3lang.org");
	QCoreApplication::setApplicationName("C3 Development Environment");
	
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
