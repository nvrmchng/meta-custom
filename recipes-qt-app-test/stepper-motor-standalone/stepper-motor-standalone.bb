SUMMARY = "control stepper motor in standalone via can bus"
DESCRIPTION = "test run pre-built qt app"
LICENSE = "CLOSED"

DEPENDS = "qtbase qtserialbus"

SRC_URI = "file://Stepper_Motor_Standalone.pro \
	   file://background.cpp \
	   file://background.h \
	   file://main.cpp \
	   file://sidebar.cpp \
	   file://sidebar.h \
	   file://settingwindow.cpp \
	   file://settingwindow.h \
	   file://controlwindow.cpp \
	   file://controlwindow.h \
	   file://serialbus.cpp \
	   file://myresources.qrc \
	   file://images/electric_motor.png \
	   file://images/play_icon_25x25.png \
	   file://images/power_button.png \
	   file://images/send_icon_30x30.png \
	   file://images/standalone_setting.png \
	   file://images/stop_icon_25x25.png"

S = "${WORKDIR}"

do_install_append() {
	install -d ${D}${bindir}
	install -m 0755 Stepper_Motor_Standalone ${D}${bindir}/
}

FILES_${PN} += "${bindir}/Stepper_Motor_Standalone"

inherit qmake5
