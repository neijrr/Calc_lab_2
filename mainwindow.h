#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <boost/numeric/ublas/matrix.hpp>
#include <qspinbox.h>
#include <qtablewidget.h>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool converge(const std::vector<double>& X, const std::vector<double>& Xp);
    double round(double x);
    
private slots:
    void updateTable(int n);
    void updateResults();
};
#endif // MAINWINDOW_H
