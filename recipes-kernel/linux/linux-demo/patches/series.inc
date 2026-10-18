# umpf-base: v7.2
# umpf-flags: upstreamstatus=insert
# umpf-name: 7.2/demo
# umpf-version: 7.2/demo/20261018-1
# umpf-topic: v7.2/topic/virtio
# umpf-hashinfo: 521353e0196edf18bbf29553ce23400ae6e28a73
# umpf-topic-range: 8d3ae59288f1e7d58d76558a6ee96d533bc5019f..79b39d7f17724a2505a54e50d98b3090a5b88d5f
UMPF_SRC_URI += "\
  file://patches/0001-virtio-mmio-add-support-for-transport-version-3.patch \
  file://patches/0002-virtio_ring-fix-infinite-loop-in-virtnet_poll_cleant.patch \
  "
# umpf-topic: v7.2/topic/drm-virtio
# umpf-hashinfo: 10e3193645c26029fe5e378bac808cb06d589594
# umpf-topic-range: 79b39d7f17724a2505a54e50d98b3090a5b88d5f..16504f25b67f120f08cf4d9e7a073a05700d69c3
UMPF_SRC_URI += "\
  file://patches/0101-drm-virtio-abort-virtqueue-wait-on-device-removal-to.patch \
  file://patches/0102-drm-virtio-check-return-value-of-vgdev_output_init.patch \
  "
# umpf-release: 7.2/demo/20261018-1
# umpf-topic-range: 16504f25b67f120f08cf4d9e7a073a05700d69c3..0af8d122c59499ed1631aecf911c705ce5244da1
UMPF_SRC_URI += "\
  file://patches/0201-Release-7.2-demo-20261018-1.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "7.2"
UMPF_VERSION = "20261018-1"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
