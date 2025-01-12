#include "mainform.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainForm::MainForm()
{
    this->setupUi();
}

MainForm::~MainForm()
{
    delete label0;
    delete label1;
    delete label2;
    delete label3;
    delete button0;
    delete button1;
    delete button2;
    delete button3;
}

void MainForm::setupUi()
{
    this->setFixedSize(320, 100);
    this->move((LCD_WIDTH - this->width())/2, (LCD_HEIGHT - this->height())/2);

    label0 = new QLabel("LED0");
    label0->setStyleSheet("QLabel { color : blue; }");
    label1 = new QLabel("LED1");
    label1->setStyleSheet("QLabel { color : blue; }");
    label2 = new QLabel("LED2");
    label2->setStyleSheet("QLabel { color : blue; }");
    label3 = new QLabel("LED3");
    label3->setStyleSheet("QLabel { color : blue; }");

    button0 = new QPushButton("OFF");
    button0->setAutoFillBackground(true);
    button0->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");

    button1 = new QPushButton("OFF");
    button1->setAutoFillBackground(true);
    button1->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");

    button2 = new QPushButton("OFF");
    button2->setAutoFillBackground(true);
    button2->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");

    button3 = new QPushButton("OFF");
    button3->setAutoFillBackground(true);
    button3->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");

    QHBoxLayout *hbox1 = new QHBoxLayout();
    hbox1->addWidget(label0, 0, Qt::AlignHCenter);
    hbox1->addWidget(label1, 0, Qt::AlignHCenter);
    hbox1->addWidget(label2, 0, Qt::AlignHCenter);
    hbox1->addWidget(label3, 0, Qt::AlignHCenter);
    QHBoxLayout *hbox2 = new QHBoxLayout();
    hbox2->addWidget(button0, 0, Qt::AlignHCenter);
    hbox2->addWidget(button1, 0, Qt::AlignHCenter);
    hbox2->addWidget(button2, 0, Qt::AlignHCenter);
    hbox2->addWidget(button3, 0, Qt::AlignHCenter);
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addLayout(hbox1);
    layout->addLayout(hbox2);
    this->setLayout(layout);

    connect(button0, SIGNAL(clicked()), this, SLOT(on_button0_clicked()));
    connect(button1, SIGNAL(clicked()), this, SLOT(on_button1_clicked()));
    connect(button2, SIGNAL(clicked()), this, SLOT(on_button2_clicked()));
    connect(button3, SIGNAL(clicked()), this, SLOT(on_button3_clicked()));
}

void MainForm::on_button0_clicked()
{
    if(button0->text() == "OFF"){
        button0->setText("ON");
        button0->setStyleSheet("QPushButton { background-color : rgb(75,255,75); }");
        turn_led_on(LED0);
    } else {    // button0->text() == "ON"
        button0->setText("OFF");
        button0->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");
        turn_led_off(LED0);
    }
}

void MainForm::on_button1_clicked()
{
    if(button1->text() == "OFF"){
        button1->setText("ON");
        button1->setStyleSheet("QPushButton { background-color : rgb(75,255,75); }");
        turn_led_on(LED1);
    } else {    // button0->text() == "ON"
        button1->setText("OFF");
        button1->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");
        turn_led_off(LED1);
    }
}

void MainForm::on_button2_clicked()
{
    if(button2->text() == "OFF"){
        button2->setText("ON");
        button2->setStyleSheet("QPushButton { background-color : rgb(75,255,75); }");
        turn_led_on(LED2);
    } else {    // button0->text() == "ON"
        button2->setText("OFF");
        button2->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");
        turn_led_off(LED2);
    }
}

void MainForm::on_button3_clicked()
{
    if(button3->text() == "OFF"){
        button3->setText("ON");
        button3->setStyleSheet("QPushButton { background-color : rgb(75,255,75); }");
        turn_led_on(LED3);
    } else {    // button0->text() == "ON"
        button3->setText("OFF");
        button3->setStyleSheet("QPushButton { background-color : rgb(192,192,192); }");
        turn_led_off(LED3);
    }
}
