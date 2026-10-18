SUMMARY = "Linux kernel for the umpfabot demo machine"
SECTION = "kernel"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"

inherit kernel

SRC_URI = " \
    https://cdn.kernel.org/pub/linux/kernel/v7.x/linux-${UMPF_BASE}.tar.xz \
    file://defconfig \
"
SRC_URI[sha256sum] = "f9fef3d14c0df53819026f4be74459835c2a0b0dcbf5b5bbd9ea19f0829402b3"

# UMPF_BASE, LINUX_VERSION and the patches, written by 'umpf format-patch --bb'
# from the umpf tag in https://github.com/a3f-prompts/linux-umpfabot
require linux-demo/patches/series.inc

PV = "${LINUX_VERSION}"
S = "${UNPACKDIR}/linux-${UMPF_BASE}"

COMPATIBLE_MACHINE = "umpfabot-demo"
