#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Hello world !");
    button.setText("My text");
    button.setToolTip("A tooltip");

    QFont font("Times New Roman");
    button.setFont(font);
    button.show();

    return app.exec();
}
