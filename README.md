# umpfabot Yocto demo BSP

A small Yocto BSP layer to try [umpfabot](https://github.com/a3f-prompts/umpfabot),
which keeps the [umpf](https://github.com/pengutronix/umpf) patch stacks of a
BSP on the newest upstream stable release with pull requests.

The layer has a barebox and a Linux recipe for a QEMU arm64 machine. Both
are patched with an umpf, a set of topic branches on top of an upstream
release, which is exported into the layer with `umpf format-patch --bb`:

| Recipe | umpf-base | umpf tags and topic branches |
| --- | --- | --- |
| [barebox](recipes-bsp/barebox/barebox_2026.04.bb) | v2026.04.0 | [a3f-prompts/barebox-umpfabot](https://github.com/a3f-prompts/barebox-umpfabot) |
| [linux-demo](recipes-kernel/linux/linux-demo_7.2.bb) | v7.2 | [a3f-prompts/linux-umpfabot](https://github.com/a3f-prompts/linux-umpfabot) |

The topic branches carry backports from upstream:

- barebox, `2026.04/demo`:
  - `v2026.04/topic/virtio`: virtio: fix out-of-bounds scatterlist array access
  - `v2026.04/topic/xhci-pci`: usb: xhci-hcd: add XHCI over PCI driver
- linux-demo, `7.2/demo`:
  - `v7.2/topic/virtio`: virtio-mmio transport version 3, a virtio_ring fix
  - `v7.2/topic/drm-virtio`: two drm/virtio fixes

Newer stable releases are available for both bases, v2026.04.1 and v2026.04.2
for barebox and v7.2.1 to v7.2.11 for Linux, so umpfabot has something to do.

## umpfabot

[.github/workflows/umpfabot-stable-update.yml](.github/workflows/umpfabot-stable-update.yml)
runs umpfabot every day and can be started from the *Actions* tab. It is
configured in [.github/umpfabot.yml](.github/umpfabot.yml): for each recipe,
it rebases the umpf onto the newest stable release, pushes the new umpf tag
to the barebox or linux repository and opens a pull request here that
updates the patches, `UMPF_BASE`, the `SRC_URI` checksum and, for Linux,
the defconfig.

The Linux defconfig is a full `.config`, which umpfabot updates with
`make olddefconfig`. It records the compiler version, so it was created
with the `gcc-aarch64-linux-gnu` of Ubuntu 24.04, which the workflow
installs. That way, the pull requests only show changes of the kernel.

It needs a GitHub App with *Contents*, *Pull requests* and *Workflows*
read and write permissions, installed for this repository, barebox-umpfabot
and linux-umpfabot. *Workflows* is needed because barebox has GitHub
workflows, which its releases change sometimes. Its ID is the
`UMPFABOT_APP_ID` variable and its private key the `UMPFABOT_PRIVATE_KEY`
secret of this repository.

## Building

The layer depends on openembedded-core (wrynose) only:

```
bitbake-layers add-layer ../umpfabot-yocto-demo-bsp
echo 'MACHINE = "umpfabot-demo"' >> conf/local.conf
bitbake barebox linux-demo
```
