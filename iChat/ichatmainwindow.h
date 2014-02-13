#ifndef ICHATMAINWINDOW_H
#define ICHATMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class iChatMainWindow;
}

class iChatMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit iChatMainWindow(QWidget *parent = 0);
    ~iChatMainWindow();

private:
    Ui::iChatMainWindow *ui;
};

#endif // ICHATMAINWINDOW_H
