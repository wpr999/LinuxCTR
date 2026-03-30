#include "gui.h"

static const mainWindowType w =
{
    .xWindow = 1200,
    .yWindow = 800,
    .xGap = 5,
    .yGap = 5,
    .xLogo = 300,
    .yLogo = 50,
    .xUnit = 100,
    .yUnit = 25,
};



gui::gui()
{
    std::cout << "[INFO] [CONSTRUCTOR] " << this << " :: " << __PRETTY_FUNCTION__ << std::endl;

    setupWindow();
    setupMainConsole();

    printToMainConsole("[INFO] Setup Complete");
}

gui::~gui() /* implicitly virtual because QWidget::~QWidget() is virtual */
{
    std::cout << "[INFO] [DESTRUCTOR] " << this << " :: " << __PRETTY_FUNCTION__ << std::endl;

}

void gui::setupWindow()
{
    setWindowTitle("Linux CTR System");
    setFixedSize(w.xWindow, w.yWindow);
}

void gui::setupMainConsole()
{
    m_mainConsoleOutput = new QPlainTextEdit(this);
    m_mainConsoleOutput->setReadOnly(true);
    m_mainConsoleOutput->setGeometry(w.xGap, w.yWindow - 400, w.xWindow - w.xGap*2, 400 - w.yGap);

    /* Czcionka konsoli do logow */
    QFont font("Courier");
    font.setStyleHint(QFont::Monospace);
    font.setFixedPitch(true);
    font.setPointSize(10);
    font.setBold(true);

    m_mainConsoleOutput->setFont(font);

    m_mainConsoleOutput->setPlainText("[INIT] Main Console Initialized...");
}

void gui::printToMainConsole(const QString &message)
{
    m_mainConsoleOutput->appendPlainText(message);
}
