#ifndef CLASSB_H
#define CLASSB_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>


class ClassB : public QWidget
{
    Q_OBJECT
public:
    explicit ClassB(QWidget *parent = 0);
    void SetValueTAM(int value);

signals:

public slots:

private:
    QPushButton *backBtn;
    QLabel *showLabeValue;



};

#endif // CLASSB_H
