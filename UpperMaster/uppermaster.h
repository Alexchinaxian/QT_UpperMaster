#ifndef UPPERMASTER_H
#define UPPERMASTER_H

#include <QMainWindow>

namespace Ui {
class UpperMaster;
}

class UpperMaster : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpperMaster(QWidget *parent = nullptr);
    ~UpperMaster();

private:
    Ui::UpperMaster *ui;
};

#endif // UPPERMASTER_H
