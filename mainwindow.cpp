#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _setup_ui();
    _setup_audio_settings();

    connect(m_player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(m_player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);
    connect(m_player, &QMediaPlayer::playingChanged, this, &MainWindow::songPlayingChanged);
    ui->song_progress_slider->setRange(0, m_player->duration() / 1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::_setup_ui()
{
    ui->play_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnPlayButton.png")));
    ui->backward_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnBackwardButton.png")));
    ui->forward_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnForwardButton.png")));
    ui->repeat_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnRepeatButton.png")));
    ui->mute_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnVolumeButton.png")));

    QSize play_button_size(40,40);
    QSize control_button_size(35, 35);

    ui->play_button->setIconSize(play_button_size);
    ui->backward_button->setIconSize(control_button_size);
    ui->forward_button->setIconSize(control_button_size);
    ui->repeat_button->setIconSize(control_button_size);
    ui->mute_button->setIconSize(control_button_size);


    //Developer Tools View:
    ui->producer_tool_view->setVisible(false);
}
void MainWindow::_setup_audio_settings()
{
    m_player = new QMediaPlayer;
    audioOutput = new QAudioOutput();
    m_player->setAudioOutput(audioOutput);

    ui->volume_slider->setMinimum(0);
    ui->volume_slider->setMaximum(100);
    ui->volume_slider->setValue(50); //default volume when opening.

    int initial_volume = ui->volume_slider->value();
    audioOutput->setVolume(initial_volume);
}
void MainWindow::on_actionOpen_Files_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Audio File"),"",tr("Files (*.MP3, *.M4A, *.WAV)"));
    m_player->setSource(QUrl(FileName));

    QFileInfo File(FileName);
    ui->song_title_lbl->setText(File.fileName());
}

void MainWindow::updateDuration(qint64 duration)
{
    if(duration || mDuration)
    {
        QTime currentTime((duration/3600) % 60, (duration/ 60) % 60, (duration *1000) % 1000);
        QTime totalTime((mDuration/3600) % 60, (mDuration/ 60) % 60, (mDuration *1000) % 1000);

        QString format = "hh:mm:ss";

        ui->song_start_time_label->setText(currentTime.toString(format));
        ui->song_end_time_label->setText(totalTime.toString(format));

    }
}
void MainWindow::durationChanged(qint64 duration)//override the QMediaPlayer::durationChanged method.
{
    mDuration = duration / 1000;
    ui->song_progress_slider->setMaximum(mDuration);

}
void MainWindow::positionChanged(qint64 position)//override the QMediaPlayer::positionChanged method.
{
    if (!ui->song_progress_slider->isSliderDown()){
        ui->song_progress_slider->setValue(position / 1000);
    }
    updateDuration(position / 1000);
}

void MainWindow::on_volume_slider_valueChanged(int value)
{
    audioOutput->setVolume(value);
}
void MainWindow::songPlayingChanged(bool playing)
{
    if (playing == false){
        if (isRepeatable){
            m_player->play();
        }
        else{
            ui->play_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnPlayButton.png")));
        }
    }
    else{
        ui->play_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnPauseButton.png")));
    }
}
void MainWindow::on_play_button_clicked()
{
    if (m_player->isPlaying()){

        m_player->pause();
    }
    else{
        songStarted = true;
        m_player->play();
    }

}
void MainWindow::on_song_progress_slider_valueChanged(int value)
{
}
void MainWindow::on_song_progress_slider_sliderMoved(int position)
{
    m_player->setPosition(position * 1000);
}
void MainWindow::on_backward_button_clicked()
{
    ui->song_progress_slider->setValue(ui->song_progress_slider->value() - 10); //fast forward
    m_player->setPosition(ui->song_progress_slider->value() * 1000);
}

void MainWindow::on_forward_button_clicked()
{
    ui->song_progress_slider->setValue(ui->song_progress_slider->value() + 10);
    m_player->setPosition(ui->song_progress_slider->value() * 1000);
}

void MainWindow::on_mute_button_clicked()
{
    bool bAudioMuted = audioOutput->isMuted();
    audioOutput->setMuted(!bAudioMuted);

    bAudioMuted
        ?
        ui->mute_button->setIcon(QIcon(QPixmap(":/buttons/images/drawnVolumeButton.png")))
        :
        ui->mute_button->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
}


void MainWindow::on_repeat_button_clicked()
{
    isRepeatable = !isRepeatable;
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    developerToolsChecked = checked; //change this value
    ui->producer_tool_view->setVisible(checked);
}


void MainWindow::on_listWidget_itemPressed(QListWidgetItem *item)
{

}

