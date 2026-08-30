#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    isMuted = false;
    PlayerWasPlaying = false;
    elapsedTimeInMs = 0; // q_property
    remainingTimeInMs = 0;
    mediaDurationInMs = 0;

    player = new QMediaPlayer(this);
    player->setVolume(ui->verticalSlider_volume->value());

    videoLayout = new QVBoxLayout(ui->videoWidget);
    video = new QVideoWidget(ui->videoWidget);

    timer = new QTimer(this);
    connect(timer , &QTimer::timeout , this , &MainWindow::OnTimeOut);
    connect(player, &QMediaPlayer::durationChanged , this , &MainWindow::OnDurationChanged);
    connect(player, &QMediaPlayer::positionChanged , this , &MainWindow::OnPositionChanged);
    connect(ui->horizontalSlider_timeLine , &QSlider::sliderMoved , this, &MainWindow::OnTimeLineSliderMoved);
    connect(ui->horizontalSlider_timeLine , &QSlider::sliderPressed , this, &MainWindow::OnTimeLineSliderPressed);
    connect(ui->horizontalSlider_timeLine , &QSlider::sliderReleased , this, &MainWindow::OnTimeLineSliderReleased);


    // q_property
    QObject::connect(this, &MainWindow::elapsedTimeChanged, [this]() {
        qDebug() << "elapsedTimpeChanged reçu : " << this->elapsedTime();
    });

    ui->verticalSlider_volume->setValue(50); // default value

    ui->pushButton_play->setIcon(QIcon(":/icons/play.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_play_clicked()
{
    player->play();
    timer->start(); //1sec

}

void MainWindow::on_pushButton_pause_clicked()
{
    player->pause();
    timer->stop();
}

void MainWindow::on_verticalSlider_volume_valueChanged(int value)
{
    player->setVolume(value);
}

void MainWindow::on_actionOpenAudioFile_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open audio File"), "/", tr("Audio (*.mp3 *.ogg *.wav)"));

    if (!fileName.isEmpty()) {

        player->setMedia(QUrl::fromLocalFile(fileName));

        QFileInfo file(fileName);

        ui->label_fileNameStr->setText(file.fileName());



    }
}

void MainWindow::on_actionOpen_video_file_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open video File"), "/", tr("Video (*.mp4 *.Avi)"));

    if (!fileName.isEmpty()) {

        player->setVideoOutput(video);
        player->setMedia(QUrl::fromLocalFile(fileName));

        QFileInfo file(fileName);

        ui->label_fileNameStr->setText(file.fileName());
        videoLayout->addWidget(video);
        videoLayout->setMargin(0);
        video->show();

    }
}


void MainWindow::on_pushButton_stop_clicked()
{
    player->stop();
    timer->stop();
    setElapsedTime(0); // 0ms
}

void MainWindow::on_pushButton_back_clicked()
{

}

void MainWindow::on_pushButton_forward_clicked()
{

}



void MainWindow::on_pushButton_mute_clicked()
{
    isMuted = ! isMuted;

    player->setMuted(isMuted);

    QString muteBtnText = isMuted ? "Unmute" : "Mute";

    ui->pushButton_mute->setText(muteBtnText);
}

void MainWindow::OnTimeOut()
{
    //elapsedTimeInMs++;
    //int seconds = elapsedTimeInMs / 1000;
    //qDebug() << seconds <<"s." ;
}

void MainWindow::OnDurationChanged()
{
    // get media duration
    mediaDurationInMs = player->duration();
    mediaDuration = SecondsToDuration(mediaDurationInMs/1000);

    // update timeline (elapsed & remaining time)
    UpdateTimeLine();

}

void MainWindow::OnPositionChanged()
{

    // update timeline (elapsed & remaining time)
    UpdateTimeLine();

    // update slider
    UpdateSlider();

}

void MainWindow::OnTimeLineSliderMoved(int sliderPosition)
{
    player->setPosition(mediaDurationInMs * sliderPosition /100); // to be modified

}

void MainWindow::OnTimeLineSliderPressed()
{
    PlayerWasPlaying = false; // renitialiser le flag

    if(player->state() == QMediaPlayer::PlayingState)
    {
        PlayerWasPlaying = true;
        player->pause();
        timer->stop();

    }

}

void MainWindow::OnTimeLineSliderReleased()
{
    if(PlayerWasPlaying )
    {
        PlayerWasPlaying = false;
        player->play();
        timer->start();
    }
}

qint64 MainWindow::elapsedTime() const
{
    return elapsedTimeInMs;
}

void MainWindow::setElapsedTime(const qint64 &newValue)
{
    if(newValue == elapsedTimeInMs)
        return;

    elapsedTimeInMs = newValue;
    emit elapsedTimeChanged();

}

void MainWindow::UpdateTimeLine()
{

    // get media duration
    setElapsedTime(player->position());
    remainingTimeInMs = mediaDurationInMs - elapsedTimeInMs;

    stDuration ElapsedTimeDuration = SecondsToDuration(elapsedTimeInMs/1000);
    stDuration RemainingTimeDuration = SecondsToDuration(remainingTimeInMs/1000);


    ui->label_elapsedTime->setText(GetDurationToQString(ElapsedTimeDuration , ":"));
    ui->label_remainingTime->setText(GetDurationToQString(RemainingTimeDuration , ":"));


}


void MainWindow::UpdateSlider()
{
    if(ui->horizontalSlider_timeLine->isSliderDown())
        return;  // interdire la modification du slider si l'utilisateur le touche

    double elapsedRatio = 0;

    // mediaDurationInMs = elapsedTimeInMs + remainingTimeInMs
    if(mediaDurationInMs != 0)
    {
        elapsedRatio = double(elapsedTimeInMs) / double(mediaDurationInMs);
        //qDebug() << "ratio : "  << elapsedRatio ;

        ui->horizontalSlider_timeLine->setValue(int(elapsedRatio*100));
    }



}



