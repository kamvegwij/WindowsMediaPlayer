#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QFileDialog"
#include "QtMultimedia"
#include "QStyle"
#include "QMediaPlayer"
#include "QtCore"
#include "QtWidgets"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 position);

    void on_play_button_clicked();

    void on_actionOpen_Files_triggered();

    void on_volume_slider_valueChanged(int value);

    void on_repeat_button_clicked();

    void on_backward_button_clicked();

    void on_forward_button_clicked();

    void on_mute_button_clicked();

    void on_song_progress_slider_valueChanged(int value);

    void on_song_progress_slider_sliderMoved(int position);

    void on_radioButton_toggled(bool checked);

    void on_listWidget_itemPressed(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *m_player;
    QAudioOutput *audioOutput;

    void updateDuration(qint64 duration);
    void songPlayingChanged(bool playing);
    void _setup_ui();
    void _setup_audio_settings();

    qint64 mDuration;
    bool developerToolsChecked; //
    bool isRepeatable = false;
    bool songStarted = false;

};
#endif // MAINWINDOW_H
