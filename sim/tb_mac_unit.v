`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01.03.2025 17:13:34
// Design Name: 
// Module Name: tb_mac_unit
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module tb_mac_unit;
    reg clk;
    reg reset;
    reg signed [7:0] inputs_0, inputs_1, inputs_2, inputs_3;
    reg signed [7:0] weights_0, weights_1, weights_2, weights_3;
    wire signed [15:0] result;
    wire [7:0] sigmoid_out;
    
    mac_unit dut (
        .clk(clk),
        .reset(reset),
        .inputs_0(inputs_0), .inputs_1(inputs_1), .inputs_2(inputs_2), .inputs_3(inputs_3),
        .weights_0(weights_0), .weights_1(weights_1), .weights_2(weights_2), .weights_3(weights_3),
        .result(result)
    );
    
    sigmoid_lut sig (
        .x(result),
        .y(sigmoid_out)
    );
    
    always begin
        #5 clk = ~clk;
    end
    
    initial begin
        clk = 0;
        reset = 1;
        inputs_0 = 8'sd1; inputs_1 = 8'sd2; inputs_2 = 8'sd3; inputs_3 = 8'sd4;
        weights_0 = 8'sd1; weights_1 = 8'sd1; weights_2 = 8'sd1; weights_3 = 8'sd1;
        #10 reset = 0;
        #20;
        inputs_0 = 8'sd2; inputs_1 = 8'sd0; inputs_2 = 8'sd5; inputs_3 = 8'sd3;
        weights_0 = 8'sd3; weights_1 = 8'sd2; weights_2 = 8'sd1; weights_3 = 8'sd4;
        #20;
        #10 $stop;
    end
endmodule