#include "uppermaster.h"
#include "ui_uppermaster.h"

UpperMaster::UpperMaster(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UpperMaster)
{
    ui->setupUi(this);
}

UpperMaster::~UpperMaster()
{
    delete ui;
}
