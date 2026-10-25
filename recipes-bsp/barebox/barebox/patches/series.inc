# umpf-base: v2026.04.2
# umpf-flags: upstreamstatus=insert
# umpf-name: 2026.04/demo
# umpf-version: 2026.04/demo/20261025-90
# umpf-topic: v2026.04/topic/virtio
# umpf-hashinfo: 94f98c0a8553c8ef286d260be6902827ae05d369
# umpf-topic-range: 8d8b547032aac04c2a21a6c6908feaed73542167..50e8fad5f4dd53ed07f215a64dbb2ca1001d2c78
UMPF_SRC_URI += "\
  file://patches/0001-virtio-fix-out-of-bounds-scatterlist-array-access-in.patch \
  "
# umpf-topic: v2026.04/topic/xhci-pci
# umpf-hashinfo: 196b707e85de3851783f52e39e6726a1298b6cac
# umpf-topic-range: 50e8fad5f4dd53ed07f215a64dbb2ca1001d2c78..46bffec564cfa33e602ce58ad57e26b82d44574d
UMPF_SRC_URI += "\
  file://patches/0101-usb-xhci-hcd-add-XHCI-over-PCI-driver.patch \
  "
# umpf-release: 2026.04/demo/20261025-90
# umpf-topic-range: 46bffec564cfa33e602ce58ad57e26b82d44574d..2824b1bc7cf8e3c30ff29583a2054be7c775c500
UMPF_SRC_URI += "\
  file://patches/0201-Release-2026.04-demo-20261025-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2026.04.2"
UMPF_VERSION = "20261025-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
