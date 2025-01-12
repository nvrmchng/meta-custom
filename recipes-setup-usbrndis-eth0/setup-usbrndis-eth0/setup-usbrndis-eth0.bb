SUMMARY = "setup for usb rndis and eth0"
DESCRIPTION = "run modprobe g_ether and ifconfig eth0 then add default gw"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/COPYING.MIT;md5=3da9cfbcb788c80a0384361b4de20420"

SRC_URI = "file://usb-ethernet.service \
	   file://eth0-setup.service "

inherit systemd

S = "${WORKDIR}"

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE:${PN} = "usb-ethernet.service eth0-setup.service"

do_install() {
	install -d ${D}${sysconfdir}/systemd/system/
	install -m 0644 ${S}/usb-ethernet.service ${D}${sysconfdir}/systemd/system/
	install -m 0644 ${S}/eth0-setup.service ${D}${sysconfdir}/systemd/system/
}
