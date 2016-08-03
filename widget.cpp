#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->page1,SIGNAL(signalCheckText(QString)),ui->page2,SLOT(slotCheckTxt(QString)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn01_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Widget::on_btn02_clicked()
{
    if(ui->stackedWidget->count()>1)
        ui->stackedWidget->setCurrentIndex(1);
}
