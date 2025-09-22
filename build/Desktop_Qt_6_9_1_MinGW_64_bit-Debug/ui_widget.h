/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer_2;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QLCDNumber *lcdNumber_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        formLayoutWidget = new QWidget(Widget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 0, 801, 571));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(10, 10, 10, 10);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::ItemRole::FieldRole, verticalSpacer_2);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(-100);
        spinBox->setMaximum(100);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, spinBox);

        horizontalSlider = new QSlider(formLayoutWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimum(-100);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, horizontalSlider);

        lcdNumber = new QLCDNumber(formLayoutWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setStyleSheet(QString::fromUtf8("font: 36pt \"\346\250\231\346\245\267\351\253\224\";"));

        formLayout->setWidget(2, QFormLayout::ItemRole::SpanningRole, lcdNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::ItemRole::SpanningRole, verticalSpacer);

        lcdNumber_2 = new QLCDNumber(formLayoutWidget);
        lcdNumber_2->setObjectName("lcdNumber_2");

        formLayout->setWidget(3, QFormLayout::ItemRole::SpanningRole, lcdNumber_2);


        retranslateUi(Widget);
        QObject::connect(spinBox, &QSpinBox::valueChanged, horizontalSlider, &QSlider::setValue);
        QObject::connect(horizontalSlider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider, &QSlider::valueChanged, lcdNumber, qOverload<int>(&QLCDNumber::display));
        QObject::connect(spinBox, &QSpinBox::valueChanged, lcdNumber_2, qOverload<int>(&QLCDNumber::display));
        QObject::connect(horizontalSlider, &QSlider::valueChanged, lcdNumber_2, qOverload<int>(&QLCDNumber::display));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
