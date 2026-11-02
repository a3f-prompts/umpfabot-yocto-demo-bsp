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
SRC_URI[sha256sum] = "d0f6b1d7324c937ccaeb5c4ca7084bfcf71db2edb3e2d3a31f0ad83a681809ab"

# UMPF_BASE, LINUX_VERSION and the patches, written by 'umpf format-patch --bb'
# from the umpf tag in https://github.com/a3f-prompts/linux-umpfabot
require linux-demo/patches/series.inc

PV = "${LINUX_VERSION}"
S = "${UNPACKDIR}/linux-${UMPF_BASE}"

COMPATIBLE_MACHINE = "umpfabot-demo"
