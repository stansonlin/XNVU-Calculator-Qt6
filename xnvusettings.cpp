#undef M_PI
#define M_PI 3.14159265358979323846
#include "xnvusettings.h"
#include <QFile>

XNVUSettings::XNVUSettings()
{

}

bool XNVUSettings::loadSettings()
{
    QFile infile(XNVU_SETTINGS_FILE);
    if(!infile.open(QIODevice::ReadOnly | QIODevice::Text)) return false;

    while(!infile.atEnd())
    {
        QString line = infile.readLine();
        line.simplified();
        if(line.contains("airports.txt", Qt::CaseInsensitive))
        {
            fileAirports = line;
        }
        else if(line.contains("navaids.txt", Qt::CaseInsensitive))
        {
            fileNavaids = line;
        }//if
        else if(line.contains("waypoints.txt", Qt::CaseInsensitive))
        {
            fileWaypoints = line;
        }//if
        else if(line.contains("rsbn.txt", Qt::CaseInsensitive))
        {
            fileRSBN = line;
        }//if
        else if(line.contains("earth_nav.dat", Qt::CaseInsensitive))
        {
            fileNavdata = line;
        }//if
    }//while

    infile.close();

    return true;
}
