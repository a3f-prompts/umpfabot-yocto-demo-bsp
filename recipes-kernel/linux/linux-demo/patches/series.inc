# umpf-base: v7.2.13
# umpf-flags: upstreamstatus=insert
# umpf-name: 7.2/demo
# umpf-version: 7.2/demo/20261027-90
# umpf-topic: v7.2/topic/virtio
# umpf-hashinfo: 521353e0196edf18bbf29553ce23400ae6e28a73
# umpf-topic-range: 3c172eede0d6b889ead876f45cc843070209208f..8464039c7e6bd4a8af39fe8e308beb023e3f5287
UMPF_SRC_URI += "\
  file://patches/0001-virtio-mmio-add-support-for-transport-version-3.patch \
  file://patches/0002-virtio_ring-fix-infinite-loop-in-virtnet_poll_cleant.patch \
  "
# umpf-topic: v7.2/topic/drm-virtio
# umpf-hashinfo: 10e3193645c26029fe5e378bac808cb06d589594
# umpf-topic-range: 8464039c7e6bd4a8af39fe8e308beb023e3f5287..bd4fa2dda64653e233d8bd7bd33c3dea1aca1489
UMPF_SRC_URI += "\
  file://patches/0101-drm-virtio-abort-virtqueue-wait-on-device-removal-to.patch \
  file://patches/0102-drm-virtio-check-return-value-of-vgdev_output_init.patch \
  "
# umpf-release: 7.2/demo/20261027-90
# umpf-topic-range: bd4fa2dda64653e233d8bd7bd33c3dea1aca1489..dd727b3141a824660cb8327a1462c32134168283
UMPF_SRC_URI += "\
  file://patches/0201-Release-7.2-demo-20261027-90.patch \
  "
SRC_URI += "${UMPF_SRC_URI}"

UMPF_BASE = "7.2.13"
UMPF_VERSION = "20261027-90"
UMPF_PV = "${UMPF_BASE}-${UMPF_VERSION}"
LINUX_VERSION ?= "${UMPF_BASE}"
# umpf-end
