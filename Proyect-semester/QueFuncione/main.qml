import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.3
import QtQuick.Dialogs 1.2
import com.budapest.pizzadelivery 1.0

ApplicationWindow {
    visible: true
    width: 520
    height: 330
    title: qsTr("Pizza Delivery Application - GVASFE - HYFEYS")

    PizzaDelivery {
        id: ordgen
        type: combobox.currentText
        size: comboboxSize.currentText
        amount: comboboxAmount.currentText
        dbname: comboboxDBoy.currentText
        custname: customerName.text
        custaddress: customerAddress.text

        onOrderGenerated: {
            if (success) {
                status.text = qsTr('<font color="green">Order generation succeeded.</font>' + info + ", Total: $ " + totalPrice)
                pizzaToppings.text = qsTr(tops)
            } else {
                status.text = qsTr('<font color="red">Order generation failed. Information required.</font>')
            }
        }
    }

    statusBar: StatusBar {
    RowLayout {
        Label {
            id: status
            }
        }
    }

    ColumnLayout{
        x: 40
        y: 40
        spacing: 15

        // Pizza type, size and amount
        RowLayout {
            spacing: 15
            Label {
                text: qsTr("Pizza type:")
            }
            ComboBox {
                id: combobox
                Layout.fillWidth: true
                model: ordgen.types
                currentIndex: 0
            }

            Label {
                text: qsTr("Pizza size:")
            }
            ComboBox {
                id: comboboxSize
                Layout.fillWidth: true
                model: [ "Small", "Medium", "Big" ]
                currentIndex: 0
            }

            Label {
                text: qsTr("Pizza amount:")
            }
            ComboBox {
                id: comboboxAmount
                Layout.fillWidth: true
                model: [ "1", "2", "3", "4", "5", "6", "7", "8", "9", "10" ]
                currentIndex: 0
            }
        }

        // Deliveryboy name
        RowLayout {
            spacing: 15
            Label {
                text: qsTr("DeliveryBoy name:")
            }
            ComboBox {
                id: comboboxDBoy
                Layout.fillWidth: true
                model: [ "Smith Peter", "Sanders Jhon", "Norton Charles" ]
                currentIndex: 0
            }
        }

        // Customer name
        RowLayout {
            spacing: 15
            Label {
                text: qsTr("Customer name:")
            }
            TextField {
                id: customerName
                Layout.fillWidth: true
                implicitWidth: 200
                onTextChanged: updateStatusBar()
            }
        }

        // Customer address
        RowLayout {
            spacing: 15
            Label {
                text: qsTr("Customer address:")
            }
            TextField {
                id: customerAddress
                Layout.fillWidth: true
                implicitWidth: 200
                onTextChanged: updateStatusBar()
            }
        }

        // Pizza toppings
        RowLayout {
            spacing: 15
            Label {
                text: qsTr("Pizza toppings:")
            }
            TextField {
                id: pizzaToppings
                Layout.fillWidth: true
                implicitWidth: 200
                onTextChanged: updateStatusBar()
                font.bold: true
                enabled: false
            }
        }

        // Buttons: Order, Quit
        RowLayout {
            spacing: 15
            Button {
                id: generate
                text: qsTr("Show toppings/&Order")
                onClicked: ordgen.generateOrder()
            }
            Button {
                text: qsTr("&Quit")
                onClicked: Qt.quit()
            }
        }
    }

    function updateStatusBar() {
        if (customerName.text == "") {
            status.text = qsTr('<font color="red">Enter the Customer name.</font>')
            generate.enabled = false
        } else if (customerAddress.text == "") {
            status.text = qsTr('<font color="red">Enter the Customer address.</font>')
            generate.enabled = false
        } else {
            status.text = ""
            generate.enabled = true
        }
    }
}
