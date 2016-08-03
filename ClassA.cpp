#include "ClassA.h"
#include "ui_ClassA.h"

ClassA::ClassA(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClassA)
{
    ui->setupUi(this);
}

ClassA::~ClassA()
{
    delete ui;
}

void ClassA::on_btnSend_clicked()
{
    emit signalCheckText(ui->lineEdit->text());
    ui->lineEdit->clear();
}
