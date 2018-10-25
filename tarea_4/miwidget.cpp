#include "miwidget.h"
#include "ui_miwidget.h"

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
    setWindowTitle("titulo");
    QStringList columnas;
    columnas<<"columna 1"<<"columna 2"<<"columna 3"<<"columna 4"<<"columna 5"<<"columna 6";
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(columnas);
}

widget::~widget()
{
    delete ui;
}

void widget::on_pushButton_clicked()
{
    int resultado;
    int fila;
    double puntaje;
    QString nombre;
    QString nivel;
     QString materia;
     QString contrato;

}
