SUMMARY = "barebox bootloader for the umpfabot demo machine"
HOMEPAGE = "https://barebox.org/"
SECTION = "bootloaders"

require recipes-bsp/barebox/barebox-common.inc
inherit barebox

LIC_FILES_CHKSUM = "file://COPYING;md5=f5125d13e000b9ca1f0d3364286c4192"

SRC_URI = "https://barebox.org/download/barebox-${UMPF_BASE}.tar.bz2"
SRC_URI[sha256sum] = "45ebbdbfe667ca66455554454178d7f80f9c4ade0e0a5ea4c8ecf2a3073f5451"

# UMPF_BASE and the patches, written by 'umpf format-patch --bb' from the
# umpf tag in https://github.com/a3f-prompts/barebox-umpfabot
require barebox/patches/series.inc

PV = "${UMPF_BASE}"

BAREBOX_CONFIG = "multi_v8_defconfig"

COMPATIBLE_MACHINE = "umpfabot-demo"
