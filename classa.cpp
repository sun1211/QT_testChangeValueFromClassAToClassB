#include "classa.h"

ClassA::ClassA(QWidget *parent)
    : QWidget(parent)
{
    closeBtn = new QPushButton("show");
    tamhoang = new ClassB();

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(closeBtn);
    mainLayout->addWidget(tamhoang);
    tamhoang->SetValueTAM(56);

    connect(closeBtn,SIGNAL(clicked(bool)),this,SLOT(showValueFun()));

}

ClassA::~ClassA()
{

}
void ClassA::showValueFun(){
    tamhoang->show();
}
