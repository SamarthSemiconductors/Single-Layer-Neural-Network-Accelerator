# Run: vivado -mode batch -source tools/create_vivado_project.tcl
set root [file normalize [file join [file dirname [info script]] ..]]
set build [file join $root build vivado]
file mkdir $build
create_project neural_accelerator $build -part xc7a100tcsg324-1 -force
add_files -norecurse [list [file join $root rtl mac_unit.v] \
    [file join $root rtl sigmoid_lut.v] [file join $root rtl mac_top.v]]
add_files -fileset constrs_1 -norecurse [file join $root constraints arty_a7_100t.xdc]
add_files -fileset sim_1 -norecurse [file join $root sim tb_mac_unit.v]
set_property top mac_top [get_filesets sources_1]
set_property top tb_mac_unit [get_filesets sim_1]
set_property target_language Verilog [current_project]
update_compile_order -fileset sources_1
update_compile_order -fileset sim_1
puts "Created project: [file join $build neural_accelerator.xpr]"
close_project
