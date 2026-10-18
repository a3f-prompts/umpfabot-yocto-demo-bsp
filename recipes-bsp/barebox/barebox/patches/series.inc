# umpf-base: v2026.04.0
# umpf-flags: upstreamstatus=insert
# umpf-name: 2026.04/demo
# umpf-version: 2026.04/demo/20261018-1
# umpf-topic: v2026.04/topic/virtio
# umpf-hashinfo: 94f98c0a8553c8ef286d260be6902827ae05d369
# umpf-topic-range: c3e3a36f1511a7b4f34061b7be118085b80f7165..f1fef5a91ab1e89b6c82b7258a5a94a6f9e0ac6f
UMPF_SRC_URI += "\
  file://patches/0001-virtio-fix-out-of-bounds-scatterlist-array-access-in.patch \
  "
# umpf-topic: v2026.04/topic/xhci-pci
# umpf-hashinfo: 196b707e85de3851783f52e39e6726a1298b6cac
# umpf-topic-range: f1fef5a91ab1e89b6c82b7258a5a94a6f9e0ac6f..11d203afb1dea01b34e39772cd5ed6f728883280
UMPF_SRC_URI += "\
  file://patches/0101-usb-xhci-hcd-add-XHCI-over-PCI-driver.patch \
  "
# umpf-release: 2026.04/demo/20261018-1
# umpf-topic-range: 11d203afb1dea01b34e39772cd5ed6f728883280..d8e8086a20dc9251cfede05500c26a21e2ca2dfc
UMPF_SRC_URI += "\
  file://patches/0201-Release-2026.04-demo-20261018-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "2026.04.0"
UMPF_VERSION = "20261018-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
# umpf-end
