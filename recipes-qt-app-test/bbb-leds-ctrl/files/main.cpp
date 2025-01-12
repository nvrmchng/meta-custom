#include <QApplication>
#include "background.h"
#include "mainform.h"

int main(int argc, char *argv[])
{
    user_leds_init();

    QApplication a(argc, argv);
    a.setOverrideCursor(QCursor(Qt::BlankCursor));

    Background *bground = new Background(NULL);
    MainForm *form = new MainForm();

    QObject::connect(bground->exitButton, SIGNAL(clicked()), form, SLOT(close()));
    QObject::connect(bground->exitButton, SIGNAL(clicked()), bground, SLOT(close()));

    bground->show();
    form->show();

    const int resultCode = a.exec();

    restore_leds();
    return resultCode;
}
