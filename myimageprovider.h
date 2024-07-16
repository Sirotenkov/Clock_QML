#ifndef MYIMAGEPROVIDER_H
#define MYIMAGEPROVIDER_H

#include <QQuickImageProvider>

class myimageprovider : public QQuickImageProvider
{
public:

    myimageprovider();

    QImage requestImage(const QString &id, QSize *size, const QSize &requestedSize) override;

};

#endif // MYIMAGEPROVIDER_H
