// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"

void Valu_tb___024root___ctor_var_reset(Valu_tb___024root* vlSelf);

Valu_tb___024root::Valu_tb___024root(Valu_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Valu_tb___024root___ctor_var_reset(this);
}

void Valu_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Valu_tb___024root::~Valu_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
