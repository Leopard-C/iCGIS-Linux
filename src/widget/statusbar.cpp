#include "statusbar.h"

#include <QString>

StatusBar::StatusBar(QStatusBar *statusBarIn)
    : statusBar(statusBarIn) {
    createWidgets();
    setupLayout();
    setUnit(kDegree);
    setCoord(0.0, 0.0);
}

StatusBar::~StatusBar() {}

void StatusBar::setUnit(CoordUint unitIn) {
    switch (unitIn) {
    case kDegree:
        labelUnit->setText("Degree");
        break;
    case kMeter:
        break;
    case kKiloMeter:
        break;
    default:
        break;
    }

    unit = unitIn;
}

void StatusBar::setCoord(double x, double y) {
    switch (unit) {
    case kDegree: {
        QString coordText = QString("%1E %2N").arg(x, 8, 'f', 5).arg(y, 8, 'f', 5);
        labelCoord->setText(coordText);
        break;
    }
    case kMeter:
        break;
    case kKiloMeter:
        break;
    default:
        break;
    }
}

// 状态栏左侧显示临时信息timeMs毫秒
void StatusBar::showMsg(const QString &msg, int timeMs)
{
    statusBar->showMessage(msg, timeMs);
}

void StatusBar::createWidgets() {
    labelCoord = new QLabel();
    labelUnit = new QLabel();
}

void StatusBar::setupLayout() {
    this->statusBar->addPermanentWidget(labelCoord);
    this->statusBar->addPermanentWidget(labelUnit);
}
