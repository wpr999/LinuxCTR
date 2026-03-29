#pragma once

#include <QSystemSemaphore>
#include <QGuiApplication>
#include <QPlainTextEdit>
#include <QSharedMemory>
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QTabWidget>
#include <QDateTime>
#include <QLineEdit>
#include <QCheckBox>
#include <QPainter>
#include <QPointer>
#include <QPixmap>
#include <QDialog>
#include <QWidget>
#include <QObject>
#include <QThread>
#include <QTabBar>
#include <QWindow>
#include <QScreen>
#include <QCursor>
#include <QDebug>
#include <QImage>
#include <QLabel>
#include <QTimer>
#include <QFont>

#include <iostream>
#include <memory>
#include <chrono>
#include <thread>
#include <mutex>
#include <cmath>

#include "guiTypes.h"

class gui : public QWidget
{
    Q_OBJECT

    QPlainTextEdit *m_mainConsole;


private slots:

    void setupWindow();

public:

    gui();
    ~gui();  /* implicitly virtual because QWidget::~QWidget() is virtual */

private slots:

};
