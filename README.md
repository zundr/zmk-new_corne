# Develop locally

## First time setup

FIXME: some step missing?

```sh
direnv allow
just init
...
```

## Build firmware

```sh
just build eyelash_corne
```

## Flash

Start with left.
Double-press reset button quickly (in less than half second).
Blue led will start blinking indicating it is in bootloader mode.
After copying the firmware file, it will restart and start running the new firmware. No need to unmount the drive.

```sh
udisksctl mount -b /dev/sda
cp firmware/nice_view-eyelash_corne_left.uf2 /run/media/$USER/NICENANO
```

Then same on right side.

```sh
udisksctl mount -b /dev/sda
cp firmware/nice_view-eyelash_corne_right.uf2 /run/media/$USER/NICENANO
```

