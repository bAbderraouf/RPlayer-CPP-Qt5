/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenAudioFile;
    QWidget *centralwidget;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QLabel *label_fileNameTitle;
    QLabel *label_fileNameStr;
    QSlider *verticalSlider_volume;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_back;
    QPushButton *pushButton_forward;
    QPushButton *pushButton_mute;
    QSlider *horizontalSlider_timeLine;
    QLabel *label_elapsedTime;
    QLabel *label_remainingTime;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(673, 214);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:white;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:black;\n"
"color:white;\n"
"    height: 30px;\n"
"	width : 30px;\n"
"    border-radius: 20px;\n"
" border: 2px solid white;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: black;\n"
"    width: 14px;\n"
"    margin: -5px 0;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    height: 3px;\n"
"    background: gray;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"  background: red;\n"
"    width: 6px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: black;\n"
"    height: 14px;\n"
"    margin: -5px 0;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"	width : 4px;\n"
"    background: gray;\n"
"    border-radius: 4px;\n"
"}"));
        actionOpenAudioFile = new QAction(MainWindow);
        actionOpenAudioFile->setObjectName(QString::fromUtf8("actionOpenAudioFile"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setGeometry(QRect(30, 120, 51, 41));
        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(90, 120, 51, 41));
        label_fileNameTitle = new QLabel(centralwidget);
        label_fileNameTitle->setObjectName(QString::fromUtf8("label_fileNameTitle"));
        label_fileNameTitle->setGeometry(QRect(40, 20, 61, 31));
        label_fileNameStr = new QLabel(centralwidget);
        label_fileNameStr->setObjectName(QString::fromUtf8("label_fileNameStr"));
        label_fileNameStr->setGeometry(QRect(110, 20, 331, 31));
        verticalSlider_volume = new QSlider(centralwidget);
        verticalSlider_volume->setObjectName(QString::fromUtf8("verticalSlider_volume"));
        verticalSlider_volume->setGeometry(QRect(510, 70, 22, 81));
        verticalSlider_volume->setMaximum(100);
        verticalSlider_volume->setOrientation(Qt::Vertical);
        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(150, 120, 51, 41));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(220, 120, 51, 41));
        pushButton_forward = new QPushButton(centralwidget);
        pushButton_forward->setObjectName(QString::fromUtf8("pushButton_forward"));
        pushButton_forward->setGeometry(QRect(280, 120, 51, 41));
        pushButton_mute = new QPushButton(centralwidget);
        pushButton_mute->setObjectName(QString::fromUtf8("pushButton_mute"));
        pushButton_mute->setGeometry(QRect(350, 120, 51, 41));
        QFont font;
        font.setStrikeOut(false);
        pushButton_mute->setFont(font);
        horizontalSlider_timeLine = new QSlider(centralwidget);
        horizontalSlider_timeLine->setObjectName(QString::fromUtf8("horizontalSlider_timeLine"));
        horizontalSlider_timeLine->setGeometry(QRect(20, 60, 481, 22));
        horizontalSlider_timeLine->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider_timeLine->setMaximum(100);
        horizontalSlider_timeLine->setValue(0);
        horizontalSlider_timeLine->setOrientation(Qt::Horizontal);
        label_elapsedTime = new QLabel(centralwidget);
        label_elapsedTime->setObjectName(QString::fromUtf8("label_elapsedTime"));
        label_elapsedTime->setGeometry(QRect(20, 80, 181, 31));
        label_remainingTime = new QLabel(centralwidget);
        label_remainingTime->setObjectName(QString::fromUtf8("label_remainingTime"));
        label_remainingTime->setGeometry(QRect(300, 80, 181, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpenAudioFile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpenAudioFile->setText(QCoreApplication::translate("MainWindow", "Open audio file", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_play->setToolTip(QCoreApplication::translate("MainWindow", "Play/Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        label_fileNameTitle->setText(QCoreApplication::translate("MainWindow", "File name :", nullptr));
#if QT_CONFIG(tooltip)
        label_fileNameStr->setToolTip(QCoreApplication::translate("MainWindow", "File Name", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fileNameStr->setText(QString());
#if QT_CONFIG(tooltip)
        verticalSlider_volume->setToolTip(QCoreApplication::translate("MainWindow", "Volume", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton_stop->setToolTip(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "stop", nullptr));
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        pushButton_forward->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_mute->setToolTip(QCoreApplication::translate("MainWindow", "Mute/Unmute", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_mute->setText(QCoreApplication::translate("MainWindow", "mute", nullptr));
#if QT_CONFIG(tooltip)
        horizontalSlider_timeLine->setToolTip(QCoreApplication::translate("MainWindow", "Time Line", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_elapsedTime->setToolTip(QCoreApplication::translate("MainWindow", "Elapsed Time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_elapsedTime->setText(QString());
#if QT_CONFIG(tooltip)
        label_remainingTime->setToolTip(QCoreApplication::translate("MainWindow", "Remaining Time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_remainingTime->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
