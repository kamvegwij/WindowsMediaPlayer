/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Files;
    QWidget *centralwidget;
    QPushButton *play_button;
    QPushButton *stop_button;
    QLabel *song_title_lbl;
    QSlider *volume_slider;
    QLabel *min_volume_lbl;
    QLabel *max_volume_lbl;
    QSlider *song_progress_slider;
    QMenuBar *menubar;
    QMenu *menuBrowse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(847, 424);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: navy;"));
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName("actionOpen_Files");
        actionOpen_Files->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        play_button = new QPushButton(centralwidget);
        play_button->setObjectName("play_button");
        play_button->setGeometry(QRect(340, 310, 71, 61));
        play_button->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid white;\n"
"border-radius: 15px;\n"
"color: white;"));
        stop_button = new QPushButton(centralwidget);
        stop_button->setObjectName("stop_button");
        stop_button->setGeometry(QRect(440, 310, 71, 61));
        stop_button->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border: 2px solid white;\n"
"border-radius: 15px;\n"
"color: white;"));
        song_title_lbl = new QLabel(centralwidget);
        song_title_lbl->setObjectName("song_title_lbl");
        song_title_lbl->setGeometry(QRect(10, 0, 841, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font.setPointSize(12);
        font.setBold(false);
        song_title_lbl->setFont(font);
        song_title_lbl->setStyleSheet(QString::fromUtf8("background-color: transparent; color: white;"));
        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setGeometry(QRect(550, 330, 271, 22));
        volume_slider->setOrientation(Qt::Horizontal);
        min_volume_lbl = new QLabel(centralwidget);
        min_volume_lbl->setObjectName("min_volume_lbl");
        min_volume_lbl->setGeometry(QRect(550, 350, 21, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font1.setBold(true);
        min_volume_lbl->setFont(font1);
        min_volume_lbl->setStyleSheet(QString::fromUtf8("color: white;"));
        max_volume_lbl = new QLabel(centralwidget);
        max_volume_lbl->setObjectName("max_volume_lbl");
        max_volume_lbl->setGeometry(QRect(780, 350, 41, 20));
        max_volume_lbl->setFont(font1);
        max_volume_lbl->setStyleSheet(QString::fromUtf8("color: white;"));
        song_progress_slider = new QSlider(centralwidget);
        song_progress_slider->setObjectName("song_progress_slider");
        song_progress_slider->setGeometry(QRect(-1, 260, 841, 22));
        song_progress_slider->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        song_progress_slider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 847, 24));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font2.setBold(false);
        menubar->setFont(font2);
        menubar->setStyleSheet(QString::fromUtf8("background-color: darkgrey; \n"
"color: black;"));
        menuBrowse = new QMenu(menubar);
        menuBrowse->setObjectName("menuBrowse");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuBrowse->menuAction());
        menuBrowse->addAction(actionOpen_Files);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Files->setText(QCoreApplication::translate("MainWindow", "Open Files", nullptr));
        play_button->setText(QString());
        stop_button->setText(QString());
        song_title_lbl->setText(QCoreApplication::translate("MainWindow", "SONG_TITLE_NAME", nullptr));
        min_volume_lbl->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        max_volume_lbl->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        menuBrowse->setTitle(QCoreApplication::translate("MainWindow", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
