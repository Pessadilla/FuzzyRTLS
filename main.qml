/* This file is generated and only relevant for integrating the project into a Qt 6 and cmake based
C++ project. */

import QtQuick 6.2
import QtQuick.Controls 6.2
import QtQuick.Layouts


Window {
    width: 1920
    height: 1080

    visible: true
    title: "FuzzyRTLS"


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
            }

            TextInput {
                id: textInput1
                text: qsTr("RSSI2")
                font.pixelSize: 17
                horizontalAlignment: Text.AlignHCenter
                maximumLength: 5
                Layout.preferredWidth: 80
                Layout.preferredHeight: 20
            }

            TextInput {
                id: textInput2
                text: qsTr("RSSI3")
                font.pixelSize: 17
                horizontalAlignment: Text.AlignHCenter
                maximumLength: 5
                Layout.preferredWidth: 80
                Layout.preferredHeight: 20
            }

            Button {
                id: button
                text: qsTr("Locate")
                Connections {
                    onClicked: {
                        commsObject.receiveTextInput(textInput.text, textInput1.text, textInput2.text)
                        var text1 = commsObject.getText1();
                        var text2 = commsObject.getText2();
                        label.text = text1 + " " + text2;
                        location.visible=true;
                        location.x=commsObject.getText1()*100;
                        location.y=880-(commsObject.getText2()*100);
                    }
                }
                checkable: false
            }
            Label {
                        id: label
                        text: "Result will be shown here"
                    }
        }
        states: [
            State {
                name: "clicked"
                when: button.checked
            }
        ]
    }


}
