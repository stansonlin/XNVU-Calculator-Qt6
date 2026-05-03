#undef M_PI
#define M_PI 3.14159265358979323846
#include "qlabelclick.h"

QLabelClick::QLabelClick(const QString text, QWidget *parent) : QLabel(parent)
{
    setText(text);
    this->setCursor(Qt::PointingHandCursor);
}

QLabelClick::QLabelClick(QWidget *parent) : QLabel(parent)
{
    this->setCursor(Qt::PointingHandCursor);
}

void QLabelClick::mousePressEvent(QMouseEvent *event)
{
    emit clicked(this);
}
