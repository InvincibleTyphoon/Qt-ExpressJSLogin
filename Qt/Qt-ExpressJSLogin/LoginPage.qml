import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Controls 2.0

ApplicationWindow{
    id: loginPageWindow
    width: 500
    maximumWidth: width
    minimumWidth: width

    height: 380
    maximumHeight: height
    minimumHeight: height

    visible: true

    Component.onCompleted: {
        loginManager.setLoginPageRef(this);
    }

    // transparent box filling whole window
    // it is for using anchor int other components
    // actually, you may use loginPagewindow.contentItem but, for comportance
    Rectangle{
        id: fillingBox
        anchors.fill: parent
        color: "transparent"
    }

    //UserName
    Rectangle{
        id: userNameBox
        anchors.top: parent.top
        anchors.left: fillingBox.left
        anchors.topMargin: 90
        anchors.leftMargin: 10
        width: fillingBox.width / 10 * 9
        height: fillingBox.height / 7 - 20
        color: "transparent"
        Text {
            id: userNameText
            text: "UserName"
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter
            width: parent.width / 3
            font.pointSize: 18
            font.bold: true
        }

        Rectangle{
            anchors.right: parent.right
            width: parent.width / 3 * 2 - 10
            anchors.verticalCenter: parent.verticalCenter
            height: parent.height
            color: "white"
            border{
                width: 1
                color: "black"
            }
            TextInput{
                id: userNameTextInput
                anchors.fill: parent
                anchors.verticalCenter: parent.verticalCenter
                anchors.leftMargin: 5
                verticalAlignment: TextInput.AlignVCenter
                font.pointSize: 20
                clip: true
            }
        }
    }

    //Password
    Rectangle{
        id: passwordBox
        anchors.top: userNameBox.bottom
        anchors.left: fillingBox.left
        anchors.topMargin: 10
        anchors.leftMargin: 10
        width: fillingBox.width / 10 * 9
        height: fillingBox.height / 7 - 20
        color: "transparent"
        Text {
            id: passwordText
            text: "Password"
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter
            width: parent.width / 3
            font.pointSize: 18
            font.bold: true
        }

        Rectangle{
            anchors.right: parent.right
            anchors.verticalCenter: parent.verticalCenter
            width: parent.width / 3 * 2 - 10
            height: parent.height
            color: "white"
            border{
                width: 1
                color: "black"
            }
            TextInput{
                id: passwordTextInput
                anchors.fill: parent
                anchors.verticalCenter: parent.verticalCenter
                anchors.leftMargin: 5
                verticalAlignment: TextInput.AlignVCenter
                font.pointSize: 20
                echoMode: TextInput.Password
                clip: true
            }
        }
    }

    //CreateAccount
    Rectangle{
        id: createAccountBox
        anchors.top: passwordBox.bottom
        anchors.left: fillingBox.left
        anchors.topMargin: 20
        anchors.leftMargin: 30
        width: 120
        height: 30
        color: "transparent"

        Text{
            anchors.fill: parent
            text: "<a href='https://github.com/'>createAccount</a>"
            onLinkActivated: Qt.openUrlExternally(link)

            color: "light blue"
            font.pointSize: 11
            font.underline: true
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }
    }

    //forgot Password
    Rectangle{
        anchors.top: passwordBox.bottom
        anchors.left: fillingBox.left
        anchors.topMargin: 20
        anchors.leftMargin: 350
        width: 120
        height: 30
        color: "transparent"
        Text{
            anchors.fill: parent
            text: "<a href='https://github.com/'>forgot password</a>"
            onLinkActivated: Qt.openUrlExternally(link)
            color: "light blue"
            font.pointSize: 11
            font.underline: true
            font.bold: true
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
        }
    }

    // remember me box
    Rectangle{
        id: rememberMeBox
        anchors.top: createAccountBox.bottom
        anchors.left: fillingBox.left
        anchors.topMargin: 20
        anchors.leftMargin: 10
        width: 200
        height: 40
        color: "transparent"
        CheckBox{
            id: rememberMeCheckbox
            indicator.width: 30
            indicator.height: 30
            anchors.verticalCenter: parent.verticalCenter
        }

        Text {
            anchors.left: rememberMeCheckbox.right
            anchors.verticalCenter: rememberMeCheckbox.verticalCenter
            font.pointSize: 18
            font.bold: true

            text: "Remember me"
        }
    }

    //Login button Box
    Rectangle{
        anchors.top: rememberMeBox.bottom
        anchors.horizontalCenter: fillingBox.horizontalCenter
        anchors.topMargin: 35
        anchors.leftMargin: 10
        width: 60
        height: 40
        color: "transparent"
        Button{
            anchors.fill: parent
            text: "Login"
        }

    }

}
