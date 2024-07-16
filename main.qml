import QtQuick 2.14
import QtQuick.Window 2.14

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Current clock")

    // INFO: Фон циферблата
    Rectangle {
        anchors.centerIn: parent
        width: Math.min(parent.width, parent.height)
        height: Math.min(parent.width, parent.height)
        radius: Math.min(width, height)
        color: "lightGray"
        opacity: 0.5

        // INFO: Секундная стрелка
        Rectangle {
            width: 2.0
            height: Math.min(parent.width, parent.height) / 2.5
            color: "black"
            x: parent.width / 2.0
            y: parent.height / 2.0
            transform: Rotation {
                angle: 180 + clock.second * (360.0 / 60.0)
            }
        }

        // INFO: Минутная стрелка
        Rectangle {
            width: 3.0
            height: Math.min(parent.width, parent.height) / 3.0
            color: "black"
            x: parent.width / 2.0
            y: parent.height / 2.0
            transform: Rotation {
                angle: 180 + clock.minute * (360.0 / 60.0)
            }
        }

        // INFO: Часовая стрелка
        Rectangle {
            width: 4.0
            height: Math.min(parent.width, parent.height) / 4.0
            color: "black"
            x: parent.width / 2.0
            y: parent.height / 2.0
            transform: Rotation {
                angle: 180 + clock.hour * (360.0 / 12.0)
            }
        }
    }

    // INFO: Изображение циферблата
    Image {
        id: image
        width: Math.min(parent.width, parent.height)
        height: width
        anchors.centerIn: parent
        source: "image://myimageprovider/MyImage_4.png"
        asynchronous: true
    }

    // INFO: центр циферблата
    Rectangle {
        id: centerRect
        width: 10.0
        height: width
        radius: height / 2.0
        anchors.centerIn: parent
        color: "black"
    }
}
