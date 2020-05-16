#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void button_openPressed();
    void button_addPressed();
    void button_savePressed();
    void button_delPressed();
    void opening();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QString cmd;
};
#endif // MAINWINDOW_H
