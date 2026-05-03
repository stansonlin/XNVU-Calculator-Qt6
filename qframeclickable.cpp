#undef M_PI
#define M_PI 3.14159265358979323846
#include "qframeclickable.h"
#include <QDebug>

QFrameClickable::QFrameClickable(QWidget *parent) : QFrame(parent)
{

}

QFrameClickable::~QFrameClickable(){};

void QFrameClickable::mousePressEvent(QMouseEvent* ev)
{
    emit clicked(ev->pos());
}


