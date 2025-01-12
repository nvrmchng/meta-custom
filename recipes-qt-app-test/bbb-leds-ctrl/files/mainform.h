#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include "user_leds.h"

#define LCD_WIDTH   480
#define LCD_HEIGHT  272

class MainForm : public QWidget
{
    Q_OBJECT
public:
    explicit MainForm();
    ~MainForm();
    void setupUi();
private slots:
    void on_button0_clicked();
    void on_button1_clicked();
    void on_button2_clicked();
    void on_button3_clicked();
private:
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QPushButton *button0;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
};

#endif // MAINFORM_H
