#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QLabel>
#include <QObject>
#include <QStatusBar>

enum CoordUint {
    kDegree = 0,
    kMeter = 1,
    kKiloMeter = 2
};

class StatusBar {
public:
    StatusBar(QStatusBar* statusBarIn);
    ~StatusBar();

public:
    void setUnit(CoordUint unit);
    void setCoord(double x, double y);
    void showMsg(const QString& msg, int timeMs = 0);

private:
    void createWidgets();
    void setupLayout();

private:
    QStatusBar* statusBar;
    QLabel* labelCoord;
    QLabel* labelUnit;
    CoordUint unit = kDegree;
};

#endif // STATUSBAR_H
