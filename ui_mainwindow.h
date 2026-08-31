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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenAudioFile;
    QAction *actionOpen_video_file;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_global;
    QWidget *videoWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_fileNameStr;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_elapsedTime;
    QSlider *horizontalSlider_timeLine;
    QLabel *label_remainingTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_play;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_back;
    QPushButton *pushButton_forward;
    QPushButton *pushButton_mute;
    QSlider *verticalSlider_volume;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(673, 417);
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
        actionOpen_video_file = new QAction(MainWindow);
        actionOpen_video_file->setObjectName(QString::fromUtf8("actionOpen_video_file"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_global = new QVBoxLayout(centralwidget);
        verticalLayout_global->setSpacing(3);
        verticalLayout_global->setObjectName(QString::fromUtf8("verticalLayout_global"));
        verticalLayout_global->setContentsMargins(0, 0, 0, 0);
        videoWidget = new QWidget(centralwidget);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy);

        verticalLayout_global->addWidget(videoWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, -1, 5, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_fileNameStr = new QLabel(centralwidget);
        label_fileNameStr->setObjectName(QString::fromUtf8("label_fileNameStr"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_fileNameStr->sizePolicy().hasHeightForWidth());
        label_fileNameStr->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_fileNameStr);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_elapsedTime = new QLabel(centralwidget);
        label_elapsedTime->setObjectName(QString::fromUtf8("label_elapsedTime"));
        sizePolicy1.setHeightForWidth(label_elapsedTime->sizePolicy().hasHeightForWidth());
        label_elapsedTime->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_elapsedTime);

        horizontalSlider_timeLine = new QSlider(centralwidget);
        horizontalSlider_timeLine->setObjectName(QString::fromUtf8("horizontalSlider_timeLine"));
        horizontalSlider_timeLine->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider_timeLine->setMaximum(100);
        horizontalSlider_timeLine->setValue(0);
        horizontalSlider_timeLine->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_timeLine);

        label_remainingTime = new QLabel(centralwidget);
        label_remainingTime->setObjectName(QString::fromUtf8("label_remainingTime"));
        sizePolicy1.setHeightForWidth(label_remainingTime->sizePolicy().hasHeightForWidth());
        label_remainingTime->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_remainingTime);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_play->sizePolicy().hasHeightForWidth());
        pushButton_play->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_play);

        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_pause->sizePolicy().hasHeightForWidth());
        pushButton_pause->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pushButton_pause);

        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));

        horizontalLayout->addWidget(pushButton_stop);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        pushButton_forward = new QPushButton(centralwidget);
        pushButton_forward->setObjectName(QString::fromUtf8("pushButton_forward"));

        horizontalLayout->addWidget(pushButton_forward);

        pushButton_mute = new QPushButton(centralwidget);
        pushButton_mute->setObjectName(QString::fromUtf8("pushButton_mute"));
        QFont font;
        font.setStrikeOut(false);
        pushButton_mute->setFont(font);

        horizontalLayout->addWidget(pushButton_mute);

        verticalSlider_volume = new QSlider(centralwidget);
        verticalSlider_volume->setObjectName(QString::fromUtf8("verticalSlider_volume"));
        sizePolicy2.setHeightForWidth(verticalSlider_volume->sizePolicy().hasHeightForWidth());
        verticalSlider_volume->setSizePolicy(sizePolicy2);
        verticalSlider_volume->setMinimum(0);
        verticalSlider_volume->setMaximum(100);
        verticalSlider_volume->setValue(30);
        verticalSlider_volume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(verticalSlider_volume);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_global->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 673, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_video_file);
        menuFile->addAction(actionOpenAudioFile);
        toolBar->addAction(actionOpenAudioFile);
        toolBar->addAction(actionOpen_video_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpenAudioFile->setText(QCoreApplication::translate("MainWindow", "Open audio file", nullptr));
        actionOpen_video_file->setText(QCoreApplication::translate("MainWindow", "Open video file", nullptr));
#if QT_CONFIG(tooltip)
        label_fileNameStr->setToolTip(QCoreApplication::translate("MainWindow", "File Name", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fileNameStr->setText(QString());
#if QT_CONFIG(tooltip)
        label_elapsedTime->setToolTip(QCoreApplication::translate("MainWindow", "Elapsed Time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_elapsedTime->setText(QString());
#if QT_CONFIG(tooltip)
        horizontalSlider_timeLine->setToolTip(QCoreApplication::translate("MainWindow", "Time Line", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_remainingTime->setToolTip(QCoreApplication::translate("MainWindow", "Remaining Time", nullptr));
#endif // QT_CONFIG(tooltip)
        label_remainingTime->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_play->setToolTip(QCoreApplication::translate("MainWindow", "Play/Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
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
        verticalSlider_volume->setToolTip(QCoreApplication::translate("MainWindow", "Volume", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
