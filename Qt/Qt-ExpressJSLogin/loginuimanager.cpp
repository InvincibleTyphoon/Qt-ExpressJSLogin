#include "loginuimanager.h"
#include "ui_loginuimanager.h"

LoginUIManager::LoginUIManager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginUIManager)
{
    ui->setupUi(this);
}

LoginUIManager::~LoginUIManager()
{
    delete ui;
}
