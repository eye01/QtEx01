#ifndef CLASSA_H
#define CLASSA_H

#include <QWidget>

namespace Ui {
class ClassA;
}

class ClassA : public QWidget
{
    Q_OBJECT

public:
    explicit ClassA(QWidget *parent = 0);
    ~ClassA();

private:
    Ui::ClassA *ui;

signals:
    void signalCheckText(QString sSt);
private slots:
    void on_btnSend_clicked();
};

#endif // CLASSA_H
