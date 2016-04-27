#include "classb.h"

ClassB::ClassB(QWidget *parent) : QWidget(parent)
{
    backBtn = new QPushButton("back",this);
    showLabeValue = new QLabel(this);
    QHBoxLayout *mi = new QHBoxLayout(this);
    mi->addWidget(showLabeValue);
    mi->addWidget(backBtn);

    connect(backBtn,SIGNAL(clicked(bool)),this,SLOT(close()));

}

void ClassB::SetValueTAM(int value){
    QString a = QString::number(value);
    showLabeValue->setText(a);
}

