

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.2
import QtQuick.Controls 6.2
import FuzzyRTLS
import QtQuick.Layouts

Rectangle {

    id: rectangle
    width: Constants.width
    height: Constants.height

    color: Constants.backgroundColor

    Rectangle {
        id: rectangle1
        x: 8
        y: 8
        width: 1200
        height: 900
        color: "#8ab7ff"

        Rectangle {
            id: rectangle2
            x: 0
            y: 880
            width: 20
            height: 20
            color: "red"
        }

        Rectangle {
            id: rectangle3
            x: 980
            y: 880
            width: 20
            height: 20
            color: "red"
        }

        Rectangle {
            id: rectangle4
            x: 560
            y: 300
            width: 20
            height: 20
            color: "red"
        }

        Rectangle {
            id: location
            visible: false
            x: 578
            y: 514
            width: 20
            height: 20
            color: "#18ff3b"
        }
    }

    ColumnLayout {
        x: 1567
        y: 454
        width: 116
        height: 173
        TextInput {
            id: textInput
            text: qsTr("RSSI1")
            font.pixelSize: 17
            horizontalAlignment: Text.AlignHCenter
            mouseSelectionMode: TextInput.SelectCharacters
            transformOrigin: Item.Center
            maximumLength: 5
            font.bold: false
            Layout.preferredWidth: 80
            Layout.preferredHeight: 20
            onTextChanged: CommsManager.setText1 = textInput.text
        }

        TextInput {
            id: textInput1
            text: qsTr("RSSI2")
            font.pixelSize: 17
            horizontalAlignment: Text.AlignHCenter
            maximumLength: 5
            Layout.preferredWidth: 80
            Layout.preferredHeight: 20
            onTextChanged: CommsManager.setText2 = textInput1.text
        }

        TextInput {
            id: textInput2
            text: qsTr("RSSI3")
            font.pixelSize: 17
            horizontalAlignment: Text.AlignHCenter
            maximumLength: 5
            Layout.preferredWidth: 80
            Layout.preferredHeight: 20
            onTextChanged: CommsManager.setText3 = textInput2.text
        }

        Button {
            id: button
            text: qsTr("Locate")
            Connections {
                onClicked: {

                }
            }
            checkable: false
        }
    }
    states: [
        State {
            name: "clicked"
            when: button.checked
        }
    ]
}
