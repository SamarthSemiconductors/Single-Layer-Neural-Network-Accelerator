module mac_top (
    input clk,          // 100 MHz
    input btn0,         // Reset
    input sw0,          // Test case
    output [3:0] led    // Lower 4 bits of sigmoid_out
);
    wire reset = btn0;
    wire signed [15:0] result;
    wire [7:0] sigmoid_out;
    reg signed [7:0] inputs_0, inputs_1, inputs_2, inputs_3;
    reg signed [7:0] weights_0, weights_1, weights_2, weights_3;
    
    always @(*) begin
        if (sw0) begin  // SW0 = 1: result = 10
            inputs_0 = 8'sd1; inputs_1 = 8'sd2; inputs_2 = 8'sd3; inputs_3 = 8'sd4;
            weights_0 = 8'sd1; weights_1 = 8'sd1; weights_2 = 8'sd1; weights_3 = 8'sd1;
        end else begin  // SW0 = 0: result = 23
            inputs_0 = 8'sd2; inputs_1 = 8'sd0; inputs_2 = 8'sd5; inputs_3 = 8'sd3;
            weights_0 = 8'sd3; weights_1 = 8'sd2; weights_2 = 8'sd1; weights_3 = 8'sd4;
        end
    end
    
    mac_unit mac (
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
    
    assign led = sigmoid_out[3:0];
endmodule