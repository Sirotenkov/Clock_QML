#ifndef CLOCK_H
#define CLOCK_H

#include <QObject>

class Clock : public QObject
{
    Q_OBJECT

public:
    Q_PROPERTY(int second READ second NOTIFY secondChanged)
    Q_PROPERTY(int minute READ minute NOTIFY minuteChanged)
    Q_PROPERTY(int hour READ hour NOTIFY hourChanged)

    Clock(QObject *parent = nullptr);

    int second() const;
    int minute() const;
    int hour() const;

signals:
    void secondChanged();
    void minuteChanged();
    void hourChanged();

private slots:
    void onTimeout();

private:
    int m_second = 0;
    int m_minute = 0;
    int m_hour = 0;

};

#endif // CLOCK_H
