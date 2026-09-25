// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VALU_TB__SYMS_H_
#define VERILATED_VALU_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Valu_tb.h"

// INCLUDE MODULE CLASSES
#include "Valu_tb___024root.h"
#include "Valu_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Valu_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Valu_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Valu_tb___024root              TOP;

    // CONSTRUCTORS
    Valu_tb__Syms(VerilatedContext* contextp, const char* namep, Valu_tb* modelp);
    ~Valu_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
