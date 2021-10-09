/********************************************************************************
** Form generated from reading UI file 'mireader.ui'
**
** Created: Tue Jan 8 17:21:47 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIREADER_H
#define UI_MIREADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_miReader
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_help;
    QWidget *widget;
    QWidget *widget_2;
    QLabel *label_4;
    QLabel *label_6;
    QWidget *widget_ihbt;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_result;
    QRadioButton *radioButton_human;
    QRadioButton *radioButton_rice;
    QRadioButton *radioButton_ath;
    QLabel *label_3;
    QRadioButton *radioButton_elegans;
    QRadioButton *radioButton_droso;
    QLabel *label_5;
    QTextEdit *textEdit_processor;
    QProgressBar *progressBar;
    QLabel *label_7;
    QRadioButton *radioButton_zebra_fish;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *miReader)
    {
        if (miReader->objectName().isEmpty())
            miReader->setObjectName(QString::fromUtf8("miReader"));
        miReader->resize(539, 503);
        miReader->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 217, 155);"));
        centralWidget = new QWidget(miReader);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 120, 113, 23));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(260, 190, 113, 23));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 120, 151, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 231, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        pushButton_submit = new QPushButton(centralWidget);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(100, 350, 91, 27));
        pushButton_submit->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 255);"));
        pushButton_help = new QPushButton(centralWidget);
        pushButton_help->setObjectName(QString::fromUtf8("pushButton_help"));
        pushButton_help->setGeometry(QRect(330, 350, 91, 27));
        pushButton_help->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 255);"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, -1, 621, 91));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 121, 91));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 20, 271, 21));
        QFont font1;
        font1.setPointSize(12);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 40, 181, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        widget_ihbt = new QWidget(widget);
        widget_ihbt->setObjectName(QString::fromUtf8("widget_ihbt"));
        widget_ihbt->setGeometry(QRect(420, 0, 120, 91));
        pushButton_browse = new QPushButton(centralWidget);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(390, 120, 91, 23));
        pushButton_browse->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 255);"));
        pushButton_result = new QPushButton(centralWidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(390, 190, 91, 23));
        pushButton_result->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 241, 255);"));
        radioButton_human = new QRadioButton(centralWidget);
        radioButton_human->setObjectName(QString::fromUtf8("radioButton_human"));
        radioButton_human->setGeometry(QRect(150, 270, 131, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        radioButton_human->setFont(font2);
        radioButton_rice = new QRadioButton(centralWidget);
        radioButton_rice->setObjectName(QString::fromUtf8("radioButton_rice"));
        radioButton_rice->setGeometry(QRect(280, 270, 71, 22));
        radioButton_rice->setFont(font2);
        radioButton_ath = new QRadioButton(centralWidget);
        radioButton_ath->setObjectName(QString::fromUtf8("radioButton_ath"));
        radioButton_ath->setGeometry(QRect(370, 270, 121, 22));
        radioButton_ath->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 270, 111, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        radioButton_elegans = new QRadioButton(centralWidget);
        radioButton_elegans->setObjectName(QString::fromUtf8("radioButton_elegans"));
        radioButton_elegans->setGeometry(QRect(150, 300, 101, 22));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        radioButton_elegans->setFont(font3);
        radioButton_droso = new QRadioButton(centralWidget);
        radioButton_droso->setObjectName(QString::fromUtf8("radioButton_droso"));
        radioButton_droso->setGeometry(QRect(370, 300, 111, 22));
        radioButton_droso->setFont(font3);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 230, 321, 21));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        textEdit_processor = new QTextEdit(centralWidget);
        textEdit_processor->setObjectName(QString::fromUtf8("textEdit_processor"));
        textEdit_processor->setGeometry(QRect(350, 230, 51, 21));
        textEdit_processor->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(230, 410, 118, 23));
        progressBar->setValue(0);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 400, 161, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        radioButton_zebra_fish = new QRadioButton(centralWidget);
        radioButton_zebra_fish->setObjectName(QString::fromUtf8("radioButton_zebra_fish"));
        radioButton_zebra_fish->setGeometry(QRect(280, 300, 111, 22));
        radioButton_zebra_fish->setFont(font3);
        miReader->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(miReader);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        miReader->setStatusBar(statusBar);

        retranslateUi(miReader);

        QMetaObject::connectSlotsByName(miReader);
    } // setupUi

    void retranslateUi(QMainWindow *miReader)
    {
        miReader->setWindowTitle(QApplication::translate("miReader", "miReader", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("miReader", "Please enter read file", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("miReader", "Please choose destination folder", 0, QApplication::UnicodeUTF8));
        pushButton_submit->setText(QApplication::translate("miReader", "Run", 0, QApplication::UnicodeUTF8));
        pushButton_help->setText(QApplication::translate("miReader", "Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        label_4->setStatusTip(QApplication::translate("miReader", "of ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label_4->setText(QApplication::translate("miReader", "Studio of Computational Biology", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("miReader", "and Bioinformatics", 0, QApplication::UnicodeUTF8));
        pushButton_browse->setText(QApplication::translate("miReader", "Input", 0, QApplication::UnicodeUTF8));
        pushButton_result->setText(QApplication::translate("miReader", "Output", 0, QApplication::UnicodeUTF8));
        radioButton_human->setText(QApplication::translate("miReader", "Homo sapiens", 0, QApplication::UnicodeUTF8));
        radioButton_rice->setText(QApplication::translate("miReader", "Oryza", 0, QApplication::UnicodeUTF8));
        radioButton_ath->setText(QApplication::translate("miReader", "Arabidopsis", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("miReader", "Choose Model", 0, QApplication::UnicodeUTF8));
        radioButton_elegans->setText(QApplication::translate("miReader", "C elegans", 0, QApplication::UnicodeUTF8));
        radioButton_droso->setText(QApplication::translate("miReader", "Drosophila", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("miReader", "Please enter number of processors (default 1)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("miReader", "Percentage complete", 0, QApplication::UnicodeUTF8));
        radioButton_zebra_fish->setText(QApplication::translate("miReader", "Fish", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class miReader: public Ui_miReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIREADER_H
