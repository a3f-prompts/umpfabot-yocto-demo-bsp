SUMMARY = "Linux kernel for the umpfabot demo machine"
SECTION = "kernel"
LICENSE = "GPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"

inherit kernel

# The defconfig enables Rust, which make olddefconfig only keeps if it finds the
# Rust toolchain. kernel-yocto-rust.bbclass adds the same for linux-yocto.
DEPENDS += "clang-native rust-native bindgen-cli-native"

SRC_URI = " \
    https://cdn.kernel.org/pub/linux/kernel/v7.x/linux-${UMPF_BASE}.tar.xz \
    file://defconfig \
"
SRC_URI[sha256sum] = "bb1b871ef95a8de10b3f7b7baf0e0d754abbf620f804b6caf860f226aa97647d"

# UMPF_BASE, LINUX_VERSION and the patches, written by 'umpf format-patch --bb'
# from the umpf tag in https://github.com/a3f-prompts/linux-umpfabot
require linux-demo/patches/series.inc

PV = "${LINUX_VERSION}"
S = "${UNPACKDIR}/linux-${UMPF_BASE}"

COMPATIBLE_MACHINE = "umpfabot-demo"
