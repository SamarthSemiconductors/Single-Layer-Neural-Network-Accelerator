# File organization changes

- `project_1.srcs/sources_1/new/mac_top.v` → `rtl/mac_top.v`
- `project_1.srcs/sources_1/new/mac_unit .v` → `rtl/mac_unit.v`
- `project_1.srcs/sources_1/new/sigmoid_lut.v` → `rtl/sigmoid_lut.v`
- `project_1.srcs/sim_1/new/tb_mac_unit.v` → `sim/tb_mac_unit.v`
- `project_1.srcs/constrs_1/new/arty_a7_100t.xdc` → `constraints/arty_a7_100t.xdc`
- `tb_mac_unit_behav.wcfg` → `sim/tb_mac_unit_behav.wcfg`
- `LICENSE` → `LICENSE`

The RTL, testbench, constraints and waveform settings are byte-for-byte unchanged.
The space before `.v` in the MAC filename has been removed.
The complete uploaded Vivado project, including generated outputs, is preserved
in `archive/original_vivado_project.zip`. The active project is recreated using
`tools/create_vivado_project.tcl`; generated files live under `build/`.
