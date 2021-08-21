#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_textChanged()
{
    if (ui->comboBox->currentIndex()==0){
        ui->textBrowser_2->setMarkdown(ui->textEdit->toPlainText());
        return;
    }
    ui->textBrowser_2->setHtml(ui->textEdit->toPlainText());
}

void MainWindow::on_comboBox_editTextChanged(const QString &arg1)
{

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if (ui->comboBox->currentIndex()==0){
        ui->textBrowser_2->setMarkdown(ui->textEdit->toPlainText());
        return;
    }
    ui->textBrowser_2->setHtml(ui->textEdit->toPlainText());
}
