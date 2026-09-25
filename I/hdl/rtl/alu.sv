
typedef enum logic [3:0] {
	ALU_OP_ADD,
	ALU_OP_SUB,
	ALU_OP_AND,
	ALU_OP_OR,
	ALU_OP_XOR,
	ALU_OP_SLL,
	ALU_OP_SRL,
	ALU_OP_SRA,
	ALU_OP_SLT,
	ALU_OP_SLTU
} e_ALU_OP_;


module alu(input e_ALU_OP_ op, input logic [15:0] a, input logic [15:0] b, output logic [15:0] ret);

	always_comb begin
		case (op)
			ALU_OP_ADD:
				ret = a + b;
			ALU_OP_SUB:
				ret = a - b;
			ALU_OP_AND:
				ret = a & b;
			ALU_OP_OR:
				ret = a | b;
			ALU_OP_XOR:
				ret = a ^ b;
			ALU_OP_SLL:
				ret = a << b[3:0];
			ALU_OP_SRL:
				ret = a >> b[3:0];
			ALU_OP_SRA:
				ret = $signed(a) >>> b[3:0];
			ALU_OP_SLT:
				ret = ($signed(a) < $signed(b)) ? 16'h0001 : 16'h0000;
			ALU_OP_SLTU:
				ret = (a < b) ? 16'h0001 : 16'h0000;
			default:
				ret = 16'h0000;

		endcase
		

	end

endmodule
