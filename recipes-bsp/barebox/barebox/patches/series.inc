# umpf-base: v2026.04.3
# umpf-flags: upstreamstatus=insert
# umpf-name: 2026.04/demo
# umpf-version: 2026.04/demo/20261121-90
# umpf-topic: v2026.04/topic/virtio
# umpf-hashinfo: 94f98c0a8553c8ef286d260be6902827ae05d369
# umpf-topic-range: 35a2066fe897ab4779a81db1e5ecda78dda67edf..5715222b6e4edb120e187188700ba8f545dc9d12
UMPF_SRC_URI += "\
  file://patches/0001-virtio-fix-out-of-bounds-scatterlist-array-access-in.patch \
  "
# umpf-topic: v2026.04/topic/xhci-pci
# umpf-hashinfo: 196b707e85de3851783f52e39e6726a1298b6cac
# umpf-topic-range: 5715222b6e4edb120e187188700ba8f545dc9d12..147ffff3bcb8aff55c9a7086b25b9e67cbaf2e2c
UMPF_SRC_URI += "\
  file://patches/0101-usb-xhci-hcd-add-XHCI-over-PCI-driver.patch \
  "
# umpf-release: 2026.04/demo/20261121-90
# umpf-topic-range: 147ffff3bcb8aff55c9a7086b25b9e67cbaf2e2c..ec344427dcf6b86599a1378b1d06a0d938d76cc9
UMPF_SRC_URI += "\
  file://patches/0201-Release-2026.04-demo-20261121-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2026.04.3"
UMPF_VERSION = "20261121-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
