SUMMARY = "barebox bootloader for the umpfabot demo machine"
HOMEPAGE = "https://barebox.org/"
SECTION = "bootloaders"

require recipes-bsp/barebox/barebox-common.inc
inherit barebox

LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

SRC_URI = "https://barebox.org/download/barebox-${UMPF_BASE}.tar.bz2"
SRC_URI[sha256sum] = "07fd3e3440c23e27d0094432f67827887fcc0e37d5fe24dc257c39b97c4294a0"

# UMPF_BASE and the patches, written by 'umpf format-patch --bb' from the
# umpf tag in https://github.com/a3f-prompts/barebox-umpfabot
require barebox/patches/series.inc

PV = "${UMPF_BASE}"

BAREBOX_CONFIG = "multi_v8_defconfig"

COMPATIBLE_MACHINE = "umpfabot-demo"
