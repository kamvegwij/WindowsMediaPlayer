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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QSlider *song_progress_slider;
    QWidget *layoutWidget;
    QHBoxLayout *audio_button_layout;
    QPushButton *repeat_button;
    QPushButton *stop_button;
    QPushButton *backward_button;
    QPushButton *play_button;
    QPushButton *forward_button;
    QPushButton *mute_button;
    QLabel *song_start_time_label;
    QLabel *song_end_time_label;
    QRadioButton *radioButton;
    QListWidget *developer_tool_view;
    QMenuBar *menubar;
    QMenu *menuBrowse;
    QMenu *menuAssistant;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(526, 504);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #2d3436;\n"
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
        song_title_lbl->setGeometry(QRect(0, 300, 521, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font1.setPointSize(9);
        font1.setBold(false);
        song_title_lbl->setFont(font1);
        song_title_lbl->setStyleSheet(QString::fromUtf8("color: #dfe6e9;\n"
"border: none;"));
        song_title_lbl->setFrameShape(QFrame::Panel);
        song_title_lbl->setAlignment(Qt::AlignCenter);
        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setGeometry(QRect(360, 420, 161, 22));
        volume_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 5px;\n"
"	width: 150px;\n"
"	border-radius: 10px;\n"
"	background: #636e72;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	margin: -3px 0px;\n"
"	height: 25px;\n"
"	width: 25px;\n"
"	border-radius: 10px;\n"
"	background: #dfe6e9;\n"
"}"));
        volume_slider->setOrientation(Qt::Horizontal);
        song_progress_slider = new QSlider(centralwidget);
        song_progress_slider->setObjectName("song_progress_slider");
        song_progress_slider->setGeometry(QRect(10, 350, 511, 22));
        song_progress_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 2px;\n"
"	width: 500px;\n"
"	border-radius: 10px;\n"
"	background: #636e72;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	margin: 0px 0px;\n"
"	height: 10px;\n"
"	width: 25px;\n"
"	border-radius: 25px;\n"
"	background: #dfe6e9;\n"
"}"));
        song_progress_slider->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 410, 277, 48));
        audio_button_layout = new QHBoxLayout(layoutWidget);
        audio_button_layout->setObjectName("audio_button_layout");
        audio_button_layout->setContentsMargins(0, 0, 0, 0);
        repeat_button = new QPushButton(layoutWidget);
        repeat_button->setObjectName("repeat_button");
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        repeat_button->setFont(font2);
        repeat_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(repeat_button);

        stop_button = new QPushButton(layoutWidget);
        stop_button->setObjectName("stop_button");
        stop_button->setFont(font2);
        stop_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(stop_button);

        backward_button = new QPushButton(layoutWidget);
        backward_button->setObjectName("backward_button");
        backward_button->setFont(font2);
        backward_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(backward_button);

        play_button = new QPushButton(layoutWidget);
        play_button->setObjectName("play_button");
        play_button->setFont(font2);
        play_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(play_button);

        forward_button = new QPushButton(layoutWidget);
        forward_button->setObjectName("forward_button");
        forward_button->setFont(font2);
        forward_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(forward_button);

        mute_button = new QPushButton(layoutWidget);
        mute_button->setObjectName("mute_button");
        mute_button->setFont(font2);
        mute_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: #dfe6e9;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: #b2bec3;\n"
"}"));

        audio_button_layout->addWidget(mute_button);

        song_start_time_label = new QLabel(centralwidget);
        song_start_time_label->setObjectName("song_start_time_label");
        song_start_time_label->setGeometry(QRect(20, 370, 61, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font3.setPointSize(7);
        font3.setBold(false);
        song_start_time_label->setFont(font3);
        song_start_time_label->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        song_end_time_label = new QLabel(centralwidget);
        song_end_time_label->setObjectName("song_end_time_label");
        song_end_time_label->setGeometry(QRect(470, 370, 41, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font4.setPointSize(7);
        font4.setBold(false);
        font4.setKerning(false);
        song_end_time_label->setFont(font4);
        song_end_time_label->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        song_end_time_label->setText(QString::fromUtf8("00:00"));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(370, 10, 141, 24));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        radioButton->setFont(font5);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	padding-left: 5px;\n"
"	border-radius: 10px;\n"
"	background-color: #636e72;\n"
"	color: #ffeaa7;\n"
"}"));
        developer_tool_view = new QListWidget(centralwidget);
        developer_tool_view->setObjectName("developer_tool_view");
        developer_tool_view->setGeometry(QRect(370, 40, 141, 251));
        developer_tool_view->setStyleSheet(QString::fromUtf8("background-color: #ffeaa7;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 526, 24));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font6.setBold(false);
        menubar->setFont(font6);
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
        repeat_button->setText(QString());
        stop_button->setText(QString());
        backward_button->setText(QString());
        play_button->setText(QString());
        forward_button->setText(QString());
        mute_button->setText(QString());
        song_start_time_label->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Producer Tools", nullptr));
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
