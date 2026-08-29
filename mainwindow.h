#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QMediaPlayer>  // sub class of QtMultimedia
#include <QFileDialog>
#include <QTimer>
#include <QDebug>
#include <QStyle>
#include "Utilis.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Q_PROPERTY(qint64 elapsedTime READ elapsedTime WRITE setElapsedTime NOTIFY elapsedTimeChanged FINAL)

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_play_clicked();

    void on_pushButton_pause_clicked();

    void on_verticalSlider_volume_valueChanged(int value);

    void on_actionOpenAudioFile_triggered();

    void on_pushButton_stop_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_forward_clicked();

    void on_pushButton_mute_clicked();

    void OnTimeOut();

    void OnDurationChanged();

    void OnPositionChanged();

    void OnTimeLineSliderMoved(int sliderPosition);

    void OnTimeLineSliderPressed();

    void OnTimeLineSliderReleased();

    qint64 elapsedTime() const;

    void setElapsedTime(qint64 const& newValue );

signals:
    void elapsedTimeChanged();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QString fileName;
    bool isMuted;
    bool PlayerWasPlaying;
    QTimer *timer;
    qint64 elapsedTimeInMs;
    qint64 remainingTimeInMs;
    qint64 mediaDurationInMs;
    stDuration mediaDuration;

    // mediaDuration = elapsedTime + remainingTime
    // duration = position + remainingTime

private:
    void UpdateTimeLine();

    void UpdateSlider();
};
#endif // MAINWINDOW_H
