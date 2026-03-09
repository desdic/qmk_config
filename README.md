# My QMK config file(s)

## Corne/Helidox from Mechboards

### Install

```sh
git clone --recurse-submodules https://github.com/qmk/qmk_firmware.git
cd qmk_firmware/keyboards/mechboards/crkbd/pro/keymaps
ln -s ln -s ~/src/private/qmk_config/mechboards/crkbd/pro/keymaps/kgn .
```

### Compile

```sh
qmk compile -e CONVERT_TO=rp2040_ce -kb mechboards/crkbd/pro -km kgn
```

### flash 

Needs to be done on both half's

```sh
mkdir -p /media/keyboard
mount /dev/sda1 /media/keyboard
cp ~kgn/src/private/keyboard/qmk_firmware/mechboards_crkbd_pro_kgn_rp2040_ce.uf2 /media/keyboard
cd ..
umount keyboard
```
