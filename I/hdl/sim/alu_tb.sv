module alu_tb;

	logic [15:0] a;
	logic [15:0] b;
	logic [15:0] ret;

	e_ALU_OP_ op;

	alu dut (
		.op(op),
		.a(a),
		.b(b),
		.ret(ret)
	);

	initial begin
		// ADD
		a = 16'd10;
		b = 16'd20;
		op = ALU_OP_ADD;

		#1;

		$display("ADD: %0d + %0d = %0d", a, b, ret);

		// SUB
		a = 16'd20;
		b = 16'd5;
		op = ALU_OP_SUB;

		#1;

		$display("SUB: %0d - %0d = %0d", a, b, ret);

		// AND
		a = 16'hFF00;
		b = 16'h0F0F;
		op = ALU_OP_AND;

		#1;

		$display("AND: %h & %h = %h", a, b, ret);

		// signed SLT
		a = 16'hFFFF; // -1
		b = 16'h0001; // 1
		op = ALU_OP_SLT;

		#1;

		$display("SLT: -1 < 1 = %0d", ret);

		// unsigned SLTU
		op = ALU_OP_SLTU;

		#1;

		$display("SLTU: 65535 < 1 = %0d", ret);

		$finish;
	end

endmodule
