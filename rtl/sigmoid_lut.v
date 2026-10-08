`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06.03.2025 12:28:30
// Design Name: 
// Module Name: sigmoid_lut
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


module sigmoid_lut (
    input signed [15:0] x,
    output reg [7:0] y
);
    always @(*) begin
        case (x)
            -16'sd8: y = 8'd2;
            -16'sd6: y = 8'd4;
            -16'sd4: y = 8'd27;
            -16'sd2: y = 8'd78;
            16'sd0:  y = 8'd128;
            16'sd2:  y = 8'd177;
            16'sd4:  y = 8'd228;
            16'sd6:  y = 8'd251;
            16'sd8:  y = 8'd253;
            default: y = (x > 8) ? 8'd253 : (x < -8) ? 8'd2 : 8'd128;
            
        endcase
    end
endmodule