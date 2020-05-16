#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->open_db, &QPushButton::clicked, this, &MainWindow::button_openPressed);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::button_addPressed);
    connect(ui->save, &QPushButton::clicked, this, &MainWindow::button_savePressed);
    connect(ui->del, &QPushButton::clicked, this, &MainWindow::button_delPressed);
    ui->table->setHorizontalHeaderLabels(QStringList() << "id" << "name" << "year" << "info");
    ui->table->horizontalHeader()->resizeSection(3, 400);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_openPressed()
{
    if (ui->path->text() != "") {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(ui->path->text());
        if (db.open() == false) {
            ui->path->setText("Can't open database!");
            return;
        } else {
            ui->path->setText("Connected to database!");
        }
        opening();
    }
}

void MainWindow::button_addPressed()
{
    ui->table->setRowCount(ui->table->rowCount() + 1);
}

void MainWindow::button_savePressed()
{
    if (db.isOpen()) {
        cmd = "SELECT * FROM games;";
        QSqlQuery query;
        query.exec(cmd);
        int row = 0;
        while (query.next()) {
            row = query.value("id").toInt();
        }
        query.first();
        for (int count = 0; count < ui->table->rowCount(); count++) {
            cmd = "UPDATE games SET name = '" + ui->table->item(count, 1)->text()
                    + "' , year = '" + ui->table->item(count, 2)->text()
                    + "' , info = '" + ui->table->item(count, 3)->text()
                    + "' WHERE id = " + QString::number(count+1) + ";";
            query.exec(cmd);
            query.next();
        }
        for (int count = row; count < ui->table->rowCount(); count++) {
            cmd = "INSERT INTO games (id, name, year, info) VALUES ('" + QString::number(count+1)
                    + "', '" + ui->table->item(count, 1)->text()
                    + "', '" + ui->table->item(count, 2)->text()
                    + "', '" + ui->table->item(count, 3)->text() + "');";
            query.exec(cmd);
        }
    } else {
        ui->path->setText("No database");
    }
}

void MainWindow::button_delPressed()
{
    if (db.isOpen()) {
        cmd = "DELETE FROM games WHERE id = '" + ui->table->item(ui->table->currentRow(), 0)->text() + "';";
        QSqlQuery query;
        query.exec(cmd);
        opening();
    } else {
        ui->path->setText("No database");
    }
}

void MainWindow::opening()
{
    cmd = "SELECT * FROM games;";
    QSqlQuery query;
    query.exec(cmd);
    int row = 0;
    while (query.next()) {
        row = query.value("id").toInt();
    }
    ui->table->setRowCount(row);
    query.first();
    ui->table->setItem(0, 0 , new QTableWidgetItem(query.value("id").toString()));
    ui->table->setItem(0, 1 , new QTableWidgetItem(query.value("name").toString()));
    ui->table->setItem(0, 2 , new QTableWidgetItem(query.value("year").toString()));
    ui->table->setItem(0, 3 , new QTableWidgetItem(query.value("info").toString()));
    row = 1;
    while (query.next()) {
        ui->table->setItem(row, 0 , new QTableWidgetItem(query.value("id").toString()));
        ui->table->setItem(row, 1 , new QTableWidgetItem(query.value("name").toString()));
        ui->table->setItem(row, 2 , new QTableWidgetItem(query.value("year").toString()));
        ui->table->setItem(row, 3 , new QTableWidgetItem(query.value("info").toString()));
        row++;
    }
}

