#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QWidget>
#include <QPushButton>

class Background : public QWidget
{
public:
    explicit Background(QWidget *parent = nullptr);
    ~Background();
    void setupUi();
    QPushButton *exitButton;
};

#endif // BACKGROUND_H
