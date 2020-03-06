/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAdd_New_Word;
    QAction *actionReset;
    QAction *actionHow_To_Use;
    QAction *actionAbout;
    QAction *actionChoose_Language;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *checkButton;
    QPushButton *caseButton;
    QPushButton *PunctButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ignoreButton;
    QPushButton *replaceButton;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuDictionary;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QMenu *menuSetings;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(781, 575);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionAdd_New_Word = new QAction(MainWindow);
        actionAdd_New_Word->setObjectName(QString::fromUtf8("actionAdd_New_Word"));
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionHow_To_Use = new QAction(MainWindow);
        actionHow_To_Use->setObjectName(QString::fromUtf8("actionHow_To_Use"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionChoose_Language = new QAction(MainWindow);
        actionChoose_Language->setObjectName(QString::fromUtf8("actionChoose_Language"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 421, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkButton = new QPushButton(layoutWidget);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));

        horizontalLayout->addWidget(checkButton);

        caseButton = new QPushButton(layoutWidget);
        caseButton->setObjectName(QString::fromUtf8("caseButton"));

        horizontalLayout->addWidget(caseButton);

        PunctButton = new QPushButton(layoutWidget);
        PunctButton->setObjectName(QString::fromUtf8("PunctButton"));

        horizontalLayout->addWidget(PunctButton);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(31, 101, 721, 411));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(14);
        textEdit->setFont(font);
        textEdit->setFrameShape(QFrame::Box);
        textEdit->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(textEdit);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(650, 30, 101, 62));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ignoreButton = new QPushButton(widget1);
        ignoreButton->setObjectName(QString::fromUtf8("ignoreButton"));

        verticalLayout_2->addWidget(ignoreButton);

        replaceButton = new QPushButton(widget1);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));

        verticalLayout_2->addWidget(replaceButton);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(460, 10, 181, 103));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        listWidget = new QListWidget(widget2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        listWidget->setFont(font1);
        listWidget->setFrameShape(QFrame::Box);

        verticalLayout_3->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 781, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDictionary = new QMenu(menubar);
        menuDictionary->setObjectName(QString::fromUtf8("menuDictionary"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuLanguage = new QMenu(menubar);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuSetings = new QMenu(menubar);
        menuSetings->setObjectName(QString::fromUtf8("menuSetings"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSetings->menuAction());
        menubar->addAction(menuDictionary->menuAction());
        menubar->addAction(menuLanguage->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuDictionary->addAction(actionAdd_New_Word);
        menuDictionary->addAction(actionReset);
        menuHelp->addAction(actionHow_To_Use);
        menuHelp->addAction(actionAbout);
        menuLanguage->addAction(actionChoose_Language);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "C-Spell", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionAdd_New_Word->setText(QApplication::translate("MainWindow", "Add New Word", nullptr));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        actionHow_To_Use->setText(QApplication::translate("MainWindow", "How To Use", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionChoose_Language->setText(QApplication::translate("MainWindow", "Choose Language", nullptr));
        checkButton->setText(QApplication::translate("MainWindow", "Check Spelling", nullptr));
        caseButton->setText(QApplication::translate("MainWindow", "Fix Casing ", nullptr));
        PunctButton->setText(QApplication::translate("MainWindow", "Fix Punct. ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Your Text Here :", nullptr));
        ignoreButton->setText(QApplication::translate("MainWindow", "Ignore", nullptr));
        replaceButton->setText(QApplication::translate("MainWindow", "Replace", nullptr));
        label->setText(QApplication::translate("MainWindow", "Suggestions :", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuDictionary->setTitle(QApplication::translate("MainWindow", "Dictionary", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", nullptr));
        menuSetings->setTitle(QApplication::translate("MainWindow", "Setings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
