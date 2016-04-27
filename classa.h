#ifndef CLASSA_H
#define CLASSA_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "classb.h"

class ClassA : public QWidget
{
    Q_OBJECT

public:
    ClassA(QWidget *parent = 0);
    ~ClassA();

private:
    QLabel *showValue;
    QPushButton *closeBtn;
    void showValueFun();
    ClassB *tamhoang;
};

#endif // CLASSA_H
