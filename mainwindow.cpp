#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"timelaps.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,timer(new QTimer(this))
    ,manager(new QNetworkAccessManager(this))

{
    ui->setupUi(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::httpCallback);
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::handleReply);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::httpCallback(){

    QUrl url1(text1);
    QUrl url2(text2);

    QNetworkRequest request1(url1);
    QNetworkRequest request2(url2);

    manager->get(request1);
    manager->get(request2);

}
void MainWindow::handleReply(QNetworkReply* reply){
    if (reply->error()) {
        num+=1;
        ui->textBrowser->append("▷ERROR:Request failed:");
        ui->lcdNumber->display(num);// Display a specific number

    }else{
        //num++;
        ui->textBrowser->append("▷SUCCESS:Request received:");
        ui->lcdNumber->display(num);// Display a specific number


    }
    reply->deleteLater();
}

void MainWindow::on_commandLinkButton_clicked()
{
    text1 = ui->textEdit->toPlainText();  // Get text from the first QLineEdit
    text2 = ui->textEdit_3->toPlainText();  // Get text from the second QLineEdit
    interval = ui->spinBox->value();        // Get value from QSpinBox
    if(text1.isEmpty()|text2.isEmpty()){
        ui->textBrowser->setText("▷ERROR:The camera URL has not been entered:");

    }else{
        ui->textBrowser->setText("▷Push 'start' to begin sending requests or 'stop' to stop:");
        timer->setInterval(interval);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    timer->start(interval);

}


void MainWindow::on_pushButton_clicked()
{
    timer->stop();
    num=0;
}

