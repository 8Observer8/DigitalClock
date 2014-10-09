
#include <QTranslator>
#include <QLocale>
#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTranslator translator;
    QString lang = QLocale::system().name();
    if ( lang == "ru_RU" ) {
        translator.load( QString( ":/MainWindow_ru.qm" ), "." );
    }
    qApp->installTranslator( &translator );

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
