import QtQuick
import QtQuick.Window
import Example

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MyItem {
        anchors.centerIn: parent
        width: 50
        height: width
    }
}
