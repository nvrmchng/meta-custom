#include "background.h"

Background::Background(QWidget *parent) : QWidget(parent)
{
    this->setupUi();
}

Background::~Background()
{

}

void Background::setupUi()
{
    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, Qt::darkGray);
    this->setAutoFillBackground(true);
    this->setPalette(pal);

    exitButton = new QPushButton("EXIT");
    exitButton->setParent(this);
    exitButton->resize(40,25);
    exitButton->move(430, 237);
    QFont font;
    font.setPixelSize(8);
    exitButton->setFont(font);
}
