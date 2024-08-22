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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Files;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *producer_vertical_layout;
    QHBoxLayout *producer_button_horizontal_layout;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *radioButton;
    QHBoxLayout *producer_view_horizontal_layout;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *producer_tool_view;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *song_info_horizontal_layout;
    QLabel *song_title_lbl;
    QSlider *song_progress_slider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *song_start_time_label;
    QSpacerItem *horizontalSpacer;
    QLabel *song_end_time_label;
    QHBoxLayout *buttons_horizontal_layout;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *audio_buttons_horizontal_layout;
    QPushButton *repeat_button;
    QPushButton *backward_button;
    QPushButton *play_button;
    QPushButton *forward_button;
    QPushButton *mute_button;
    QSlider *volume_slider;
    QMenuBar *menubar;
    QMenu *menuBrowse;
    QMenu *menuAssistant;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(664, 500);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #dfe6e9;\n"
"\n"
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
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(638, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        producer_vertical_layout = new QVBoxLayout();
        producer_vertical_layout->setObjectName("producer_vertical_layout");
        producer_button_horizontal_layout = new QHBoxLayout();
        producer_button_horizontal_layout->setObjectName("producer_button_horizontal_layout");
        horizontalSpacer_4 = new QSpacerItem(48, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        producer_button_horizontal_layout->addItem(horizontalSpacer_4);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	padding-left: 5px;\n"
"	border-radius: 10px;\n"
"	background-color: #636e72;\n"
"	color: #ffeaa7;\n"
"}"));

        producer_button_horizontal_layout->addWidget(radioButton);


        producer_vertical_layout->addLayout(producer_button_horizontal_layout);

        producer_view_horizontal_layout = new QHBoxLayout();
        producer_view_horizontal_layout->setObjectName("producer_view_horizontal_layout");
        horizontalSpacer_5 = new QSpacerItem(38, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        producer_view_horizontal_layout->addItem(horizontalSpacer_5);

        producer_tool_view = new QListWidget(centralwidget);
        new QListWidgetItem(producer_tool_view);
        new QListWidgetItem(producer_tool_view);
        new QListWidgetItem(producer_tool_view);
        new QListWidgetItem(producer_tool_view);
        new QListWidgetItem(producer_tool_view);
        new QListWidgetItem(producer_tool_view);
        producer_tool_view->setObjectName("producer_tool_view");
        producer_tool_view->setStyleSheet(QString::fromUtf8("background-color: #ffeaa7;"));

        producer_view_horizontal_layout->addWidget(producer_tool_view);


        producer_vertical_layout->addLayout(producer_view_horizontal_layout);


        horizontalLayout->addLayout(producer_vertical_layout);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 86, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        song_info_horizontal_layout = new QVBoxLayout();
        song_info_horizontal_layout->setObjectName("song_info_horizontal_layout");
        song_title_lbl = new QLabel(centralwidget);
        song_title_lbl->setObjectName("song_title_lbl");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font2.setPointSize(9);
        font2.setBold(false);
        song_title_lbl->setFont(font2);
        song_title_lbl->setStyleSheet(QString::fromUtf8("color: #636e72;\n"
"border: none;"));
        song_title_lbl->setFrameShape(QFrame::Panel);
        song_title_lbl->setAlignment(Qt::AlignCenter);

        song_info_horizontal_layout->addWidget(song_title_lbl);

        song_progress_slider = new QSlider(centralwidget);
        song_progress_slider->setObjectName("song_progress_slider");
        song_progress_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 2px;\n"
"	border-radius: 10px;\n"
"	background: #636e72;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	margin: 0px 0px;\n"
"	height: 10px;\n"
"	width: 25px;\n"
"	border-radius: 25px;\n"
"	background: #ffeaa7;\n"
"}"));
        song_progress_slider->setOrientation(Qt::Horizontal);

        song_info_horizontal_layout->addWidget(song_progress_slider);


        verticalLayout->addLayout(song_info_horizontal_layout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        song_start_time_label = new QLabel(centralwidget);
        song_start_time_label->setObjectName("song_start_time_label");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font3.setPointSize(7);
        font3.setBold(false);
        song_start_time_label->setFont(font3);
        song_start_time_label->setStyleSheet(QString::fromUtf8("color:#2d3436; \n"
""));

        horizontalLayout_2->addWidget(song_start_time_label);

        horizontalSpacer = new QSpacerItem(548, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        song_end_time_label = new QLabel(centralwidget);
        song_end_time_label->setObjectName("song_end_time_label");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font4.setPointSize(7);
        font4.setBold(false);
        font4.setKerning(false);
        song_end_time_label->setFont(font4);
        song_end_time_label->setStyleSheet(QString::fromUtf8("color:#2d3436; \n"
""));
        song_end_time_label->setText(QString::fromUtf8("00:00"));

        horizontalLayout_2->addWidget(song_end_time_label);


        verticalLayout->addLayout(horizontalLayout_2);

        buttons_horizontal_layout = new QHBoxLayout();
        buttons_horizontal_layout->setObjectName("buttons_horizontal_layout");
        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttons_horizontal_layout->addItem(horizontalSpacer_3);

        audio_buttons_horizontal_layout = new QHBoxLayout();
        audio_buttons_horizontal_layout->setObjectName("audio_buttons_horizontal_layout");
        repeat_button = new QPushButton(centralwidget);
        repeat_button->setObjectName("repeat_button");
        QFont font5;
        font5.setPointSize(20);
        font5.setBold(true);
        repeat_button->setFont(font5);
        repeat_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: transparent;\n"
"}"));
        repeat_button->setFlat(true);

        audio_buttons_horizontal_layout->addWidget(repeat_button);

        backward_button = new QPushButton(centralwidget);
        backward_button->setObjectName("backward_button");
        backward_button->setFont(font5);
        backward_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: transparent;\n"
"}"));

        audio_buttons_horizontal_layout->addWidget(backward_button);

        play_button = new QPushButton(centralwidget);
        play_button->setObjectName("play_button");
        play_button->setFont(font5);
        play_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: transparent;\n"
"}"));
        play_button->setFlat(false);

        audio_buttons_horizontal_layout->addWidget(play_button);

        forward_button = new QPushButton(centralwidget);
        forward_button->setObjectName("forward_button");
        forward_button->setFont(font5);
        forward_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: transparent;\n"
"}"));

        audio_buttons_horizontal_layout->addWidget(forward_button);

        mute_button = new QPushButton(centralwidget);
        mute_button->setObjectName("mute_button");
        mute_button->setFont(font5);
        mute_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: transparent;\n"
"border-radius: 15px;\n"
"color: white;\n"
"width: 40px;\n"
"height: 40px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"	background-color: transparent;\n"
"}"));

        audio_buttons_horizontal_layout->addWidget(mute_button);


        buttons_horizontal_layout->addLayout(audio_buttons_horizontal_layout);

        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 5px;\n"
"	border-radius: 10px;\n"
"	background: #636e72;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	margin: -3px 0px;\n"
"	height: 25px;\n"
"	width: 25px;\n"
"	border-radius: 10px;\n"
"	background: #2d3436;\n"
"}"));
        volume_slider->setOrientation(Qt::Horizontal);

        buttons_horizontal_layout->addWidget(volume_slider);


        verticalLayout->addLayout(buttons_horizontal_layout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 664, 24));
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
        radioButton->setText(QCoreApplication::translate("MainWindow", "Producer Tools", nullptr));

        const bool __sortingEnabled = producer_tool_view->isSortingEnabled();
        producer_tool_view->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = producer_tool_view->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Audio Levels", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = producer_tool_view->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = producer_tool_view->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Song Key", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = producer_tool_view->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "High Frequencies", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = producer_tool_view->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Mid Frequencies", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = producer_tool_view->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "Low Frequencies", nullptr));
        producer_tool_view->setSortingEnabled(__sortingEnabled);

        song_title_lbl->setText(QString());
        song_start_time_label->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        repeat_button->setText(QString());
        backward_button->setText(QString());
        play_button->setText(QString());
        forward_button->setText(QString());
        mute_button->setText(QString());
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
