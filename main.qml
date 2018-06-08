import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.2

Window {
    color: "#cdcec8"
    visible: true
    title: qsTr("Score Query System")
    width: 650
    height: 250
    Text {
        id: text1
        x: 16
        y: 82
        width: 86
        height: 27
        text: qsTr("科目")
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.bold: true
        font.family: "Courier"
        font.pixelSize: 21
    }

    Text {
        id: text2
        x: 16
        y: 129
        width: 86
        height: 42
        text: qsTr("班级名次")
        verticalAlignment: Text.AlignVCenter
        font.family: "Times New Roman"
        font.bold: true
        fontSizeMode: Text.VerticalFit
        font.pixelSize: 21
    }

    Text {
        id: text3
        x: 292
        y: 142
        width: 26
        height: 16
        text: qsTr("----")
        font.pixelSize: 12
    }

    Text {
        id: text4
        x: 16
        y: 29
        width: 86
        height: 31
        text: qsTr("导入成绩")
        font.bold: true
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 20
    }

    ComboBox {
        id: comboBox
        x: 134
        y: 82
        width: 341
        height: 27
    }

    Button {
        id: button
        x: 523
        y: 29
        width: 92
        height: 31
        text: qsTr("请选择文件")
        activeFocusOnPress: false
        enabled: true
    }

    Button {
        id: button1
        x: 523
        y: 129
        width: 92
        height: 42
        text: qsTr("查询")
        activeFocusOnPress: false
    }

    TextField {
        id: textField1
        x: 134
        y: 129
        width: 145
        height: 42
        placeholderText: qsTr("Text Field")
    }

    TextField {
        id: textField2
        x: 332
        y: 129
        width: 143
        height: 42
        placeholderText: qsTr("Text Field")
    }

    TextField {
        id: textField
        x: 134
        y: 29
        width: 341
        height: 31
        placeholderText: qsTr("Text Field")
    }

}
