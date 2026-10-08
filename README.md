# Single-Layer Neural Network Accelerator

Verilog project containing a four-input signed multiply-and-sum unit,
a small sigmoid lookup table, and an Arty A7-100T board wrapper.
This update organizes the existing files; it does not change the hardware logic.

## Project structure

```
rtl/
  mac_top.v                    Board wrapper: clock, button, switch and LEDs
  mac_unit.v                   Registered four-product sum
  sigmoid_lut.v                Activation lookup table
sim/
  tb_mac_unit.v                Original behavioral testbench
  tb_mac_unit_behav.wcfg        Original Vivado waveform settings
constraints/
  arty_a7_100t.xdc              Original board pins and 100 MHz clock constraint
tools/
  create_vivado_project.tcl     Recreates a project using the organized sources
  sim.sh                       Runs the original testbench using Icarus
docs/                         File-move record and verification notes
archive/
  original_vivado_project.zip  Complete original project and generated outputs
LICENSE
README.md
.gitignore
```

Generated files go in `build/`, which is excluded from Git.
`mac_unit .v` has been renamed to `mac_unit.v`.

## Vivado

From this folder, run:

```bash
vivado -mode batch -source tools/create_vivado_project.tcl
```

Open `build/vivado/neural_accelerator.xpr`. The design top is `mac_top` and
simulation top is `tb_mac_unit`. The FPGA part is `xc7a100tcsg324-1`, copied
from the original project. The supplied XDC is preserved unchanged.
Run behavioral simulation, synthesis or implementation through Vivado as needed.
The creation script is provided but has not been executed in Vivado here.

## Icarus simulation

With Icarus Verilog installed:

```bash
bash tools/sim.sh
```

The original testbench applies two input/weight combinations and stops after
60 ns. It contains no assertions, console result reporting or waveform dumping;
this run is a compilation/execution smoke check, not functional verification.

## Existing design limitations

The sum output is 16 bits and can overflow for general signed 8-bit inputs.
The sigmoid LUT explicitly handles only nine input values; other values inside
its range return 128. These behaviors remain unchanged in this structural update.
See `docs/FILE_MOVES.md` for the exact file moves. The original project and
historical build outputs remain available inside the backup archive.
