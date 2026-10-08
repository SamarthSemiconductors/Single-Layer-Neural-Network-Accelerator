# Structure validation

- All seven relocated original files were compared byte-for-byte against the upload.
- Icarus Verilog 12.0 compiled the relocated RTL and original testbench.
- `vvp -n` executed the original testbench through its `$stop` at 60 ns.
- No functional correctness is inferred from this smoke check.
- Vivado project recreation has not been executed here.
- The complete original project is preserved in the backup archive.
