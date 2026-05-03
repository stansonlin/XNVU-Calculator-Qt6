#undef M_PI
#define M_PI 3.14159265358979323846
#include "qtablewidgetitemdata.h"


QTableWidgetItemData::QTableWidgetItemData(NVUPOINT *wp)
{
    QFont font = this->font();
    font.setPointSize(9);
    setFont(font);

    nvupoint = wp;
}
