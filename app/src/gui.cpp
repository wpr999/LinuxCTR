#include "gui.h"

static const mainWindowType w =
{
    .xWindow = 1200,
    .yWindow = 750,
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
}

gui::~gui() /* implicitly virtual because QWidget::~QWidget() is virtual */
{
    std::cout << "[INFO] [DESTRUCTOR] " << this << " :: " << __PRETTY_FUNCTION__ << std::endl;

}

void gui::setupWindow()
{
    setWindowTitle("Linux CTR System");
}

