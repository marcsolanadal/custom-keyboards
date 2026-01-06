# TOTEM Keyboard

A 38-key split keyboard with a columnar stagger layout designed by GEIST.

## Setting Up Split Handedness

This keyboard uses `EE_HANDS` to store handedness in EEPROM. Each half must be flashed with specific bootloader targets.

### Left Half Setup
1. Connect **only the left half** via USB
2. Put in bootloader mode (double-tap reset button)
3. Flash: `qmk flash -kb totem -km default -bl uf2-split-left`
4. Look for: `#pragma message "Faking EE_HANDS for left hand" [OK]`

### Right Half Setup
1. Connect **only the right half** via USB
2. Put in bootloader mode (double-tap reset button)
3. Flash: `qmk flash -kb totem -km default -bl uf2-split-right`
4. Look for: `#pragma message "Faking EE_HANDS for right hand" [OK]`

### Test
1. Connect both halves with TRRS cable
2. Plug in either half via USB
3. Verify key mappings are correct (not inverted)

**Important**: Only connect one half at a time during flashing. Once set, handedness is permanent.