#ifndef UTILIS_H
#define UTILIS_H

#include <QString>


/*--------------------------------------------------------------------------------
* @brief duration time struct
*---------------------------------------------------------------------------------*/
struct stDuration {
    int seconds;
    int minutes;
    int hours;
};


/*--------------------------------------------------------------------------------

* @brief set duration in min & sec
* @param duration structure

*---------------------------------------------------------------------------------*/
void setDuration(stDuration& duration, int const& min, int const& sec);


/*--------------------------------------------------------------------------------

* @brief convert seconds to duration
* @param seconds : number of seconds
* @return stDuration

*---------------------------------------------------------------------------------*/
stDuration SecondsToDuration(qint64 seconds);



/*--------------------------------------------------------------------------------

* @brief convert duration to string
* @param sep : separator between min and seconds, default ":"
* @return duration in string format

*---------------------------------------------------------------------------------*/
QString GetDurationToQString(stDuration const& duration, QString sep = ":");



#endif // UTILIS_H
