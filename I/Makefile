# ============================================================
# VH16I Makefile
# ============================================================

RTL_DIR   := hdl/rtl
SIM_DIR   := hdl/sim
FPGA_DIR  := hdl/fpga
BUILD_DIR := build

# ------------------------------------------------------------
# Tools
# ------------------------------------------------------------

VERILATOR := verilator
YOSYS     := yosys
NEXTPNR   := nextpnr-himbaechel
GOWINPACK := gowin_pack
LOADER    := openFPGALoader

# ------------------------------------------------------------
# Sources
# ------------------------------------------------------------

RTL_SRCS := $(wildcard $(RTL_DIR)/*.sv)

# Simulation
TB      ?= alu_tb
TB_FILE ?= $(SIM_DIR)/$(TB).sv

# FPGA
TOP      ?= tangnano9k_top
TOP_FILE ?= $(FPGA_DIR)/$(TOP).sv
CST      ?= $(FPGA_DIR)/tangnano9k.cst

DEVICE := GW1NR-LV9QN88PC6/I5
FAMILY := GW1N-9C

# ------------------------------------------------------------
# Build files
# ------------------------------------------------------------

JSON     := $(BUILD_DIR)/$(TOP).json
PNR_JSON := $(BUILD_DIR)/$(TOP)_pnr.json
BIT      := $(BUILD_DIR)/$(TOP).fs

# ============================================================
# Targets
# ============================================================

.PHONY: all lint sim run synth pnr bit load flash clean

all: lint

# ------------------------------------------------------------
# Verilator lint
# ------------------------------------------------------------

lint:
	$(VERILATOR) \
		--lint-only \
		-Wall \
		$(RTL_SRCS)

# ------------------------------------------------------------
# Simulation
#
# Example:
#   make sim TB=alu_tb
# ------------------------------------------------------------

sim: $(BUILD_DIR)
	$(VERILATOR) \
		--binary \
		--timing \
		--trace \
		-Wall \
		--top-module $(TB) \
		-Mdir $(BUILD_DIR)/sim_$(TB) \
		$(RTL_SRCS) \
		$(TB_FILE)

	$(BUILD_DIR)/sim_$(TB)/V$(TB)

# ------------------------------------------------------------
# FPGA synthesis
# ------------------------------------------------------------

synth: $(JSON)

$(JSON): $(RTL_SRCS) $(TOP_FILE) | $(BUILD_DIR)
	$(YOSYS) -p "\
		read_verilog -sv $(RTL_SRCS) $(TOP_FILE); \
		synth_gowin -top $(TOP) -json $(JSON); \
	"

# ------------------------------------------------------------
# Place & Route
# ------------------------------------------------------------

pnr: $(PNR_JSON)

$(PNR_JSON): $(JSON) $(CST)
	$(NEXTPNR) \
		--json $(JSON) \
		--write $(PNR_JSON) \
		--device $(DEVICE) \
		--vopt family=$(FAMILY) \
		--vopt cst=$(CST)

# ------------------------------------------------------------
# Generate bitstream
# ------------------------------------------------------------

bit: $(BIT)

$(BIT): $(PNR_JSON)
	$(GOWINPACK) \
		-d $(FAMILY) \
		-o $(BIT) \
		$(PNR_JSON)

# ------------------------------------------------------------
# Tang Nano 9K - SRAM
# ------------------------------------------------------------

load: $(BIT)
	$(LOADER) \
		-b tangnano9k \
		$(BIT)

# ------------------------------------------------------------
# Tang Nano 9K - Flash
# ------------------------------------------------------------

flash: $(BIT)
	$(LOADER) \
		-b tangnano9k \
		-f \
		--verify \
		$(BIT)

# ------------------------------------------------------------

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)