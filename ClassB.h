#ifndef CLASSB_H
#define CLASSB_H

#include <QWidget>

namespace Ui {
class ClassB;
}

class ClassB : public QWidget
{
    Q_OBJECT

public:
    explicit ClassB(QWidget *parent = 0);
    ~ClassB();

private:
    Ui::ClassB *ui;

public slots:
    void slotCheckTxt(QString sText);


};

#endif // CLASSB_H
