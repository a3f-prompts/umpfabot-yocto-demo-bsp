# umpf-base: v7.2.14
# umpf-flags: upstreamstatus=insert
# umpf-name: 7.2/demo
# umpf-version: 7.2/demo/20261031-90
# umpf-topic: v7.2/topic/virtio
# umpf-hashinfo: 521353e0196edf18bbf29553ce23400ae6e28a73
# umpf-topic-range: e09610b541f2725a6382137c168e4efe208917c3..d159686bac70e2db519b766e9f0bfcd5f13dbdc0
UMPF_SRC_URI += "\
  file://patches/0001-virtio-mmio-add-support-for-transport-version-3.patch \
  file://patches/0002-virtio_ring-fix-infinite-loop-in-virtnet_poll_cleant.patch \
  "
# umpf-topic: v7.2/topic/drm-virtio
# umpf-hashinfo: 10e3193645c26029fe5e378bac808cb06d589594
# umpf-topic-range: d159686bac70e2db519b766e9f0bfcd5f13dbdc0..4ceb7253b93c00a658b1afbf597e1be2f6e4cf1c
UMPF_SRC_URI += "\
  file://patches/0101-drm-virtio-abort-virtqueue-wait-on-device-removal-to.patch \
  file://patches/0102-drm-virtio-check-return-value-of-vgdev_output_init.patch \
  "
# umpf-release: 7.2/demo/20261031-90
# umpf-topic-range: 4ceb7253b93c00a658b1afbf597e1be2f6e4cf1c..60b223a058a322761df6a206fdbbe85a229f0ae2
UMPF_SRC_URI += "\
  file://patches/0201-Release-7.2-demo-20261031-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "7.2.14"
UMPF_VERSION = "20261031-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
