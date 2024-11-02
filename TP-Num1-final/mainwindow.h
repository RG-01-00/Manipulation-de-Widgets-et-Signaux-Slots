#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private slots:
    void on_actionQuitter_triggered();

    void on_actiona_propos_triggered();

    void on_actionGris_triggered();

    void on_actionBlanc_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
