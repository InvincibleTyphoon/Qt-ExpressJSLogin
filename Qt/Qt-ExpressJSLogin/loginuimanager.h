#ifndef LOGINUIMANAGER_H
#define LOGINUIMANAGER_H

#include <QWidget>

namespace Ui {
class LoginUIManager;
}

class LoginUIManager : public QWidget
{
    Q_OBJECT

public:
    explicit LoginUIManager(QWidget *parent = 0);
    ~LoginUIManager();

private:
    Ui::LoginUIManager *ui;
};

#endif // LOGINUIMANAGER_H
