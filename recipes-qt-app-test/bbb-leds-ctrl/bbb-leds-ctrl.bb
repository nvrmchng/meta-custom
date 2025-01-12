SUMMARY = "turn on or off 4 user leds in BBB"
DESCRIPTION = "test run pre-built qt app"
LICENSE = "CLOSED"

DEPENDS = "qtbase"

SRC_URI = "file://BBB_LEDs_Ctrl.pro \
	   file://background.cpp \
	   file://background.h \
	   file://main.cpp \
	   file://mainform.cpp \
	   file://mainform.h \
	   file://user_leds.cpp \
	   file://user_leds.h"

S = "${WORKDIR}"

do_install_append() {
	install -d ${D}${bindir}
	install -m 0755 BBB_LEDs_Ctrl ${D}${bindir}/
}

FILES_${PN} += "${bindir}/BBB_LEDs_Ctrl"

inherit qmake5
