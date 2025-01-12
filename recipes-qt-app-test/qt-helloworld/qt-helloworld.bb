SUMMARY = "test qt helloworld"
DESCRIPTION = "test run pre-built qt app"
LICENSE = "CLOSED"

DEPENDS = "qtbase"

SRC_URI = "file://QtHelloWorld.pro \
	   file://main.cpp"

S = "${WORKDIR}"

do_install_append() {
	install -d ${D}${bindir}
	install -m 0755 QtHelloWorld ${D}${bindir}/
}

FILES_${PN} += "${bindir}/QtHelloWorld"

inherit qmake5
