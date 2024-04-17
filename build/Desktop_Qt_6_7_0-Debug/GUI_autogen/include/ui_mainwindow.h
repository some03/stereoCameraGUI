/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QTextEdit *textEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QTextBrowser *textBrowser;
    QSpinBox *spinBox;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_3;
    QLabel *label_5;
    QTextBrowser *textBrowser_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuinterval;
    QMenu *menu3D;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(977, 704);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("aakar")});
        font.setItalic(true);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        MainWindow->setTabletTracking(true);
        MainWindow->setWindowOpacity(0.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"     background-color: rgba(245, 245, 245, 100%);\n"
"  \n"
"   }\n"
" \n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 80, 461, 161));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgba(220, 220, 220, 1%); \n"
"    color: black;                               \n"
"    border: 2px solid black;               \n"
"    border-radius: 0px;                       \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 0 3px;\n"
"    background-color: transparent;\n"
"}"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 40, 431, 31));
        textEdit_3 = new QTextEdit(groupBox);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(10, 100, 431, 31));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 15, 91, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Uroob")});
        font1.setPointSize(15);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 80, 121, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Uroob")});
        font2.setPointSize(15);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 461, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Dhurjati")});
        font3.setPointSize(31);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(220, 220, 220, 1%); \n"
"    color: black;                               \n"
"    border: 2px solid black;               \n"
"    border-radius: 0px;                       "));
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 300, 281, 351));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: rgba(220, 220, 220, 1%); \n"
"    color: black;                               \n"
"    border: 2px solid black;               \n"
"    border-radius: 0px;                       \n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 0 3px;\n"
"    background-color: transparent;\n"
"}"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 230, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: black;\n"
"    background-color: none;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:black;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #ffd700;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #b03f44;\n"
"    background-color: #df4b45;\n"
"}"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 290, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ff8c00;\n"
"    background-color: none;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color:#ff8c00;\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#ffd700;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    color: #b03f44;\n"
"    background-color: #df4b45;\n"
"}"));
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(130, 220, 131, 121));
        lcdNumber->setStyleSheet(QString::fromUtf8("QLCDNumber {\n"
"    color: #ff8c00;\n"
"    background-color: none;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    border-color: black;\n"
"    border-radius: 0px;\n"
"}"));
        lcdNumber->setDigitCount(5);
        textBrowser = new QTextBrowser(groupBox_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 100, 256, 111));
        textBrowser->setStyleSheet(QString::fromUtf8("    QTextBrowser{\n"
"    color: orange;\n"
"    background-color: rgba(220, 220, 220, 60%); \n"
"    border-style: double;\n"
"    border-width: 0px;\n"
"    border-color: black;\n"
"    border-radius: 0px;\n"
"}"));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(10, 50, 71, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Uroob")});
        spinBox->setFont(font4);
        spinBox->setMouseTracking(true);
        spinBox->setTabletTracking(true);
        spinBox->setStyleSheet(QString::fromUtf8(""));
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setMinimum(600);
        spinBox->setMaximum(2000);
        commandLinkButton = new QCommandLinkButton(groupBox_2);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(100, 60, 161, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Uroob")});
        font5.setPointSize(13);
        commandLinkButton->setFont(font5);
        commandLinkButton->setStyleSheet(QString::fromUtf8("QCommandLinkButton { \n"
"\343\200\200color: yellow;\n"
" }"));
        commandLinkButton->setIconSize(QSize(20, 20));
        commandLinkButton->setCheckable(false);
        commandLinkButton->setChecked(false);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 181, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("    background-color: none;\n"
"   "));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 250, 281, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Dhurjati")});
        font6.setPointSize(23);
        label_5->setFont(font6);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(220, 220, 220, 1%); \n"
"    color: black;                               \n"
"    border: 2px solid black;               \n"
"    border-radius: 0px;                       "));
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(300, 320, 171, 331));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Uroob")});
        font7.setBold(false);
        textBrowser_2->setFont(font7);
        textBrowser_2->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    color: black;\n"
"    background-color: rgba(220, 220, 220, 20%); \n"
"    border-style: double;\n"
"    border-width: 1.5px;\n"
"    border-color: black;\n"
"    border-radius: 0px;\n"
"}"));
        textBrowser_2->setAcceptRichText(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 250, 141, 71));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Uroob")});
        font8.setPointSize(28);
        font8.setBold(false);
        label_6->setFont(font8);
        label_6->setStyleSheet(QString::fromUtf8("color: #ff8c00;\n"
"    background-color: none;\n"
"   "));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 10, 461, 61));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(220, 220, 220, 1%); \n"
"    color: black;                               \n"
"    border: 2px solid black;               \n"
"    border-radius: 0px;                       "));
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(600, 80, 301, 71));
        label_8->setFont(font8);
        label_8->setStyleSheet(QString::fromUtf8("color: #ff8c00;\n"
"    background-color: none;\n"
"   "));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(540, 190, 381, 311));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 977, 27));
        menuinterval = new QMenu(menubar);
        menuinterval->setObjectName("menuinterval");
        menu3D = new QMenu(menubar);
        menu3D->setObjectName("menu3D");
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuinterval->menuAction());
        menubar->addAction(menu3D->menuAction());
        menuinterval->addSeparator();
        menu3D->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\360\237\216\246CAMERA1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\360\237\216\246CAMERA2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CAMERA-INFO", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "SET AND CREAR", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "shooting interval(milli sec)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TIME-LAPS", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Uroob'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">&quot;Please </span><span style=\" font-family:'Ubuntu'; color:#ff7800;\">do not </span><span style=\" font-family:'Ubuntu';\">set the shooting interval to</span><span style=\" font-family:'Ubuntu'; color:#ff7800;\"> less than</span><span style=\" font-family:'Ubuntu';\"> </span><span style=\" font-family:'Ubuntu'; color:#ff7800;\">600 milliseconds</span><span styl"
                        "e=\" font-family:'Ubuntu';\">.&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">&quot;Please be sure to enter the URL into </span><span style=\" font-family:'Ubuntu'; color:#ff7800;\">camera-info</span><span style=\" font-family:'Ubuntu';\"> before shooting.&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu';\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; color:#ff7800;\">\342\206\251</span><span style=\" font-family:'Ubuntu';\">&quot;might be miscounting a few pictures occasionally, sorry!\360\237\230\201&quot;</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\342\232\240WANING", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "RTAB-MAP \360\237\227\272", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Comming Soon :)", nullptr));
        menuinterval->setTitle(QCoreApplication::translate("MainWindow", "interval", nullptr));
        menu3D->setTitle(QCoreApplication::translate("MainWindow", "3D", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
