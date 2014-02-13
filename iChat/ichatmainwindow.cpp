#include "ichatmainwindow.h"
#include "ui_ichatmainwindow.h"

iChatMainWindow::iChatMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::iChatMainWindow)
{
    ui->setupUi(this);
}

iChatMainWindow::~iChatMainWindow()
{
    delete ui;
}
