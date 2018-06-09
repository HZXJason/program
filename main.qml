import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.2
import io.qt.program.client 1.0
import QtQuick.Layouts 1.3
Window {
    color: "#cdcec8"
    visible: true
    title: qsTr("Score Query System")
    width: 650
    height: 300

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
        y: 153
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
        y: 166
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



    TextField {
        id: textField1
        x: 134
        y: 153
        width: 145
        height: 42
        text: qsTr("")
    }

    TextField {
        id: textField2
        x: 332
        y: 153
        width: 143
        height: 42
        placeholderText: qsTr("")
    }

    TextField {
        id: textField
        x: 134
        y: 29
        width: 341
        height: 31
        font.family: "Courier"
        placeholderText: qsTr("")
    }
    ExclusiveGroup{

            id: mos;
        }
    RadioButton {
        id: radioButton
        x: 134
        y: 82
        text: qsTr("语文")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton1
        x: 254
        y: 82
        text: qsTr("数学")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton2
        x: 386
        y: 82
        width: 62
        height: 16
        text: qsTr("英语")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton3
        x: 134
        y: 104
        text: qsTr("化学")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton4
        x: 254
        y: 104
        text: qsTr("生物")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton5
        x: 386
        y: 104
        text: qsTr("物理")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton6
        x: 134
        y: 126
        text: qsTr("政治")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton7
        x: 254
        y: 126
        text: qsTr("历史")
        exclusiveGroup: mos;
    }

    RadioButton {
        id: radioButton8
        x: 386
        y: 126
        text: qsTr("地理")
        exclusiveGroup: mos;
    }

    TextArea {
        id: textArea
        x: 16
        y: 208
        width: 599
        height: 64
        text: qsTr("")
    }
    Myclient{
     id:mClient;
 }
    Button {
        id: button
        x: 523
        y: 29
        width: 92
        height: 31
        text: qsTr("完成")
        onClicked:
        {
            mClient.mPath=textField.text;

        }
    }

    Button {
        id: button1
        x: 523
        y: 153
        width: 92
        height: 42
        text: qsTr("查询")
        onClicked:
        {
           mClient.mRight=parseInt(textField2.text);
           mClient.mLeft=parseInt(textField1.text);
            if(radioButton.checked)
            {
                mClient.subject=1;
            }
            if(radioButton1.checked)
            {
                mClient.subject=2;
            }
            if(radioButton2.checked)
            {
                mClient.subject=3;
            }
            if(radioButton3.checked)
            {
                mClient.subject=4;
            }
            if(radioButton4.checked)
            {
                mClient.subject=5;
            }
            if(radioButton5.checked)
            {
                mClient.subject=6;
            }
            if(radioButton6.checked)
            {
                mClient.subject=7;
            }
            if(radioButton7.checked)
            {
               mClient.subject=8;
            }
            if(radioButton8.checked)
            {
               mClient.subject=9;
            }

           mClient.mRead();
           textArea.text=mClient.mstr;
        }
    }

}
