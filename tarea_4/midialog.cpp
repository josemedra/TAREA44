#include "midialog.h"
#include "ui_midialog.h"
#include<QString>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    accept();// invocando accept
}

void Dialog::on_buttonBox_rejected()
{
    reject();// invocando
}

QString Dialog::getDatoLineEdit()
{

    return ui->nombre->text();


}
