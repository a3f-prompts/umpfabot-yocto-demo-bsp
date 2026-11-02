# umpf-base: v7.2.15
# umpf-flags: upstreamstatus=insert
# umpf-name: 7.2/demo
# umpf-version: 7.2/demo/20261102-90
# umpf-topic: v7.2/topic/virtio
# umpf-hashinfo: 521353e0196edf18bbf29553ce23400ae6e28a73
# umpf-topic-range: 497791a0a96b866d90add64041c47acdff49cae6..b4a53447abb7d7c381961cf7e355d1999243b566
UMPF_SRC_URI += "\
  file://patches/0001-virtio-mmio-add-support-for-transport-version-3.patch \
  file://patches/0002-virtio_ring-fix-infinite-loop-in-virtnet_poll_cleant.patch \
  "
# umpf-topic: v7.2/topic/drm-virtio
# umpf-hashinfo: 10e3193645c26029fe5e378bac808cb06d589594
# umpf-topic-range: b4a53447abb7d7c381961cf7e355d1999243b566..a8f18770e988f25c46ccd030b26bf1f45823fc60
UMPF_SRC_URI += "\
  file://patches/0101-drm-virtio-abort-virtqueue-wait-on-device-removal-to.patch \
  file://patches/0102-drm-virtio-check-return-value-of-vgdev_output_init.patch \
  "
# umpf-release: 7.2/demo/20261102-90
# umpf-topic-range: a8f18770e988f25c46ccd030b26bf1f45823fc60..ad6167a6a13fac593664f841d6c65787db6577de
UMPF_SRC_URI += "\
  file://patches/0201-Release-7.2-demo-20261102-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "7.2.15"
UMPF_VERSION = "20261102-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
