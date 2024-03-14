This is my personal build of DVM based on version $6.4$.

## Patches
- `statuscmd` to signal changes in dwmblocks
- `restartsig` to restart DWM after an update
- `actualfullscreen` to enable full screen of a client
- `vanitygaps` to have gaps around each client
- `cyclelayouts` to loop over the available layouts
- `scratchpad`
- `xresources` to customize from xresoures
- `pertag` + `dwm-tab-i3like` to enable the tab-like layout in i3
- `hide_vacant_tags`
- `shif-tools` to switch between tags with clients. Replace with the simplied version `shift-tools.c` on the [webpage](https://dwm.suckless.org/patches/shift-tools/).
- `systray`: To move statusbar to the left for systray, in `drawbar` function, it is updated that `x = -getsystraywidth() - systrayspacing;`.

## Hotkeys
TODO

## References
- Luke Smith's dwm [repo](https://github.com/lukesmithxyz/dwm)
- DistroTube' dwm [repo](https://gitlab.com/dwt1/dwm-distrotube)
