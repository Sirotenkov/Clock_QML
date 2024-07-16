#include <QTimer>
#include <QTime>
#include "clock.h"

Clock::Clock(QObject *parent): QObject(parent)
{
    QTimer* const timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();

    connect(timer, &QTimer::timeout, this, &Clock::onTimeout);
}

void Clock::onTimeout() {
    auto time = QTime::currentTime();

    m_second = time.second();
    emit secondChanged();

    m_minute = time.minute();
    emit minuteChanged();

    m_hour = time.hour();
    emit hourChanged();
}

int Clock::second() const {
    return m_second;
}

int Clock::minute() const {
    return m_minute;
}

int Clock::hour() const {
    return m_hour;
}
