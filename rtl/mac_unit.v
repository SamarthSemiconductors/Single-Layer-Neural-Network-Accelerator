`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01.03.2025 17:12:12
// Design Name: 
// Module Name: mac_unit
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


module mac_unit (
    input clk,
    input reset,
    input signed [7:0] inputs_0, inputs_1, inputs_2, inputs_3,  // Individual input ports
    input signed [7:0] weights_0, weights_1, weights_2, weights_3, // Individual weight ports
    output reg signed [15:0] result
);
    wire signed [15:0] products [0:3];  // Internal array is fine
    
    // Explicit multiplications
    assign products[0] = inputs_0 * weights_0;
    assign products[1] = inputs_1 * weights_1;
    assign products[2] = inputs_2 * weights_2;
    assign products[3] = inputs_3 * weights_3;
    
    always @(posedge clk or posedge reset) begin
        if (reset) result <= 16'sd0;
        else result <= products[0] + products[1] + products[2] + products[3];
    end
endmodule
