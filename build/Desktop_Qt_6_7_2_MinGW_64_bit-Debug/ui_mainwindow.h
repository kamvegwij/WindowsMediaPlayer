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
#include <QtWidgets/QHBoxLayout>
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
    QLabel *song_title_lbl;
    QSlider *volume_slider;
    QLabel *min_volume_lbl;
    QLabel *max_volume_lbl;
    QSlider *song_progress_slider;
    QWidget *widget;
    QHBoxLayout *audio_button_layout;
    QPushButton *repeat_button;
    QPushButton *stop_button;
    QPushButton *backward_button;
    QPushButton *play_button;
    QPushButton *forward_button;
    QMenuBar *menubar;
    QMenu *menuBrowse;
    QMenu *menuAssistant;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(522, 504);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #485460;\n"
"\n"
""));
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName("actionOpen_Files");
        QFont font;
        font.setPointSize(7);
        actionOpen_Files->setFont(font);
        actionOpen_Files->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        song_title_lbl = new QLabel(centralwidget);
        song_title_lbl->setObjectName("song_title_lbl");
        song_title_lbl->setGeometry(QRect(0, 0, 521, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font1.setPointSize(12);
        font1.setBold(false);
        song_title_lbl->setFont(font1);
        song_title_lbl->setStyleSheet(QString::fromUtf8("background-color: #34e7e4;\n"
"border: 1px solid #d2dae2;\n"
"color: #1e272e;"));
        song_title_lbl->setFrameShape(QFrame::Panel);
        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setGeometry(QRect(370, 420, 131, 22));
        volume_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 5px;\n"
"	width: 150px;\n"
"	border-radius: 10px;\n"
"	background: #d2dae2;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	height: 25px;\n"
"	width: 25px;\n"
"	margin: -2px -2px;\n"
"	border-radius: 10px;\n"
"	background: #ffc048;\n"
"}"));
        volume_slider->setOrientation(Qt::Horizontal);
        min_volume_lbl = new QLabel(centralwidget);
        min_volume_lbl->setObjectName("min_volume_lbl");
        min_volume_lbl->setGeometry(QRect(370, 440, 21, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font2.setBold(true);
        min_volume_lbl->setFont(font2);
        min_volume_lbl->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        max_volume_lbl = new QLabel(centralwidget);
        max_volume_lbl->setObjectName("max_volume_lbl");
        max_volume_lbl->setGeometry(QRect(470, 440, 41, 20));
        max_volume_lbl->setFont(font2);
        max_volume_lbl->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        song_progress_slider = new QSlider(centralwidget);
        song_progress_slider->setObjectName("song_progress_slider");
        song_progress_slider->setGeometry(QRect(0, 370, 511, 22));
        song_progress_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 2px;\n"
"	width: 500px;\n"
"	border-radius: 10px;\n"
"	background: #d2dae2;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	height: 15px;\n"
"	width: 15px;\n"
"	margin: -2px -2px;\n"
"	border-radius: 10px;\n"
"	background: #ff3f34;\n"
"}"));
        song_progress_slider->setOrientation(Qt::Horizontal);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 410, 261, 48));
        audio_button_layout = new QHBoxLayout(widget);
        audio_button_layout->setObjectName("audio_button_layout");
        audio_button_layout->setContentsMargins(0, 0, 0, 0);
        repeat_button = new QPushButton(widget);
        repeat_button->setObjectName("repeat_button");
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        repeat_button->setFont(font3);
        repeat_button->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;"));

        audio_button_layout->addWidget(repeat_button);

        stop_button = new QPushButton(widget);
        stop_button->setObjectName("stop_button");
        stop_button->setFont(font3);
        stop_button->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;"));

        audio_button_layout->addWidget(stop_button);

        backward_button = new QPushButton(widget);
        backward_button->setObjectName("backward_button");
        backward_button->setFont(font3);
        backward_button->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;"));

        audio_button_layout->addWidget(backward_button);

        play_button = new QPushButton(widget);
        play_button->setObjectName("play_button");
        play_button->setFont(font3);
        play_button->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;"));

        audio_button_layout->addWidget(play_button);

        forward_button = new QPushButton(widget);
        forward_button->setObjectName("forward_button");
        forward_button->setFont(font3);
        forward_button->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;"));

        audio_button_layout->addWidget(forward_button);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 522, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font4.setBold(false);
        menubar->setFont(font4);
        menubar->setStyleSheet(QString::fromUtf8("background-color: #485460; \n"
"color: #d2dae2;"));
        menuBrowse = new QMenu(menubar);
        menuBrowse->setObjectName("menuBrowse");
        menuBrowse->setFont(font);
        menuAssistant = new QMenu(menubar);
        menuAssistant->setObjectName("menuAssistant");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuBrowse->menuAction());
        menubar->addAction(menuAssistant->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuBrowse->addAction(actionOpen_Files);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Files->setText(QCoreApplication::translate("MainWindow", "Open Files", nullptr));
        song_title_lbl->setText(QCoreApplication::translate("MainWindow", "NO SONG PLAYING", nullptr));
        min_volume_lbl->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        max_volume_lbl->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        repeat_button->setText(QString());
        stop_button->setText(QString());
        backward_button->setText(QString());
        play_button->setText(QString());
        forward_button->setText(QString());
        menuBrowse->setTitle(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        menuAssistant->setTitle(QCoreApplication::translate("MainWindow", "Assistant", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
