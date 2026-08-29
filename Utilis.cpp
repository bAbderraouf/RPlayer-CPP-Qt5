#include "Utilis.h"

QString GetDurationToQString(stDuration const& duration, QString sep)
{
    QString timeStr =
          (duration.hours < 10 ? "0" : "")      + QString::number(duration.hours) + sep
        + (duration.minutes < 10 ? "0" : "")    + QString::number(duration.minutes) + sep
        + (duration.seconds < 10 ? "0" : "")    + QString::number(duration.seconds);

    return timeStr;
}


void setDuration(stDuration& duration, int const & hours, int const& min, int const& sec)
{
    duration.hours = hours;
    duration.minutes = min;
    duration.seconds = sec;

}

stDuration SecondsToDuration(qint64 seconds)
{
    stDuration duration;
    int hr = 0, min = 0, sec = 0 ;

    hr = seconds / 3600 ;
    min = (seconds % 3600) / 60;
    sec = seconds % 60;  // le reste

    setDuration(duration, hr, min, sec);

    return duration;
}
