#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_player = new QMediaPlayer;
    ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->stop_button->setIcon(style()->standardIcon(QStyle::SP_MediaStop));

    audioOutput = new QAudioOutput();
    m_player->setAudioOutput(audioOutput);

    int initial_volume = ui->volume_slider->value();
    audioOutput->setVolume(initial_volume);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_play_button_clicked()
{
    if (m_player->isPlaying()){
        ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        m_player->pause();

    }
    else{
        m_player->play();
        ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }

}


void MainWindow::on_stop_button_clicked()
{
    m_player->stop();
}


void MainWindow::on_actionOpen_Files_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Audio File"),"",tr("MP3 Files (*.MP3)"));
    m_player->setSource(QUrl(FileName));

    QFileInfo File(FileName);
    ui->song_title_lbl->setText(File.fileName());
}


void MainWindow::on_volume_slider_valueChanged(int value)
{

    audioOutput->setVolume(value);
}

