#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
mkdir -p build/sim
iverilog -g2012 -s tb_mac_unit -o build/sim/mac.vvp \
    rtl/mac_unit.v rtl/sigmoid_lut.v sim/tb_mac_unit.v
# Original testbench ends with $stop; -n treats it as a finish in batch mode.
vvp -n build/sim/mac.vvp
