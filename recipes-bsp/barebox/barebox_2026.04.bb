SUMMARY = "barebox bootloader for the umpfabot demo machine"
HOMEPAGE = "https://barebox.org/"
SECTION = "bootloaders"

require recipes-bsp/barebox/barebox-common.inc
inherit barebox

LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

SRC_URI = "https://barebox.org/download/barebox-${UMPF_BASE}.tar.bz2"
SRC_URI[sha256sum] = "aa575d3ca4e7a8abe6b9796d0ff1d1ace43f86e34c627cc055ddb0a7ebd9dbe2"

# UMPF_BASE and the patches, written by 'umpf format-patch --bb' from the
# umpf tag in https://github.com/a3f-prompts/barebox-umpfabot
require barebox/patches/series.inc

PV = "${UMPF_BASE}"

BAREBOX_CONFIG = "multi_v8_defconfig"

COMPATIBLE_MACHINE = "umpfabot-demo"
