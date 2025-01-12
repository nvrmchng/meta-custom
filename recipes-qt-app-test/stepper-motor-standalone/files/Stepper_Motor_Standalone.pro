QT       += core gui widgets serialbus

TARGET = Stepper_Motor_Standalone

SOURCES += \
    controlwindow.cpp \
    main.cpp \
    background.cpp \
    serialbus.cpp \
    settingwindow.cpp \
    sidebar.cpp

HEADERS += \
    background.h \
    controlwindow.h \
    settingwindow.h \
    sidebar.h

RESOURCES += \
    myresources.qrc
