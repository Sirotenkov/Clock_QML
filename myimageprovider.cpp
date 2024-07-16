#include "myimageprovider.h"

myimageprovider::myimageprovider() : QQuickImageProvider(QQuickImageProvider::Image) {}

QImage myimageprovider::requestImage(const QString &id, QSize *size, const QSize &requestedSize)
{

    QImage image(":/MyImage_4.png");

    size->setWidth(image.width());
    size->setHeight(image.height());

    return image;

}
