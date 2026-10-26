# umpf-base: v7.2.12
# umpf-flags: upstreamstatus=insert
# umpf-name: 7.2/demo
# umpf-version: 7.2/demo/20261026-90
# umpf-topic: v7.2/topic/virtio
# umpf-hashinfo: 521353e0196edf18bbf29553ce23400ae6e28a73
# umpf-topic-range: cc9de5d4b5ab6459f5774946aa3195ad51236fa8..74818101009406ef973544e6dafb682ff0e8ce7e
UMPF_SRC_URI += "\
  file://patches/0001-virtio-mmio-add-support-for-transport-version-3.patch \
  file://patches/0002-virtio_ring-fix-infinite-loop-in-virtnet_poll_cleant.patch \
  "
# umpf-topic: v7.2/topic/drm-virtio
# umpf-hashinfo: 10e3193645c26029fe5e378bac808cb06d589594
# umpf-topic-range: 74818101009406ef973544e6dafb682ff0e8ce7e..e04dbc88ef777f2766be90e9ed1217b4d451d3a1
UMPF_SRC_URI += "\
  file://patches/0101-drm-virtio-abort-virtqueue-wait-on-device-removal-to.patch \
  file://patches/0102-drm-virtio-check-return-value-of-vgdev_output_init.patch \
  "
# umpf-release: 7.2/demo/20261026-90
# umpf-topic-range: e04dbc88ef777f2766be90e9ed1217b4d451d3a1..a547fe7b50e4db192a142956395ce415f5d9e330
UMPF_SRC_URI += "\
  file://patches/0201-Release-7.2-demo-20261026-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "7.2.12"
UMPF_VERSION = "20261026-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
