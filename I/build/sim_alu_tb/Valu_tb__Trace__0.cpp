// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Valu_tb__Syms.h"


void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0\n"); );
    // Body
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Valu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_tb___024root__trace_chg_0_sub_0(Valu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_chg_0_sub_0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgSData(oldp+0,(vlSelfRef.alu_tb__DOT__a),16);
    bufp->chgSData(oldp+1,(vlSelfRef.alu_tb__DOT__b),16);
    bufp->chgSData(oldp+2,((0x0000ffffU & ((8U & (IData)(vlSelfRef.alu_tb__DOT__op))
                                            ? ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((IData)(vlSelfRef.alu_tb__DOT__op) 
                                                               >> 1U))))) 
                                               & (((1U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                                  < (IData)(vlSelfRef.alu_tb__DOT__b)))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 VL_LTS_III(16, (IData)(vlSelfRef.alu_tb__DOT__a), (IData)(vlSelfRef.alu_tb__DOT__b)))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((IData)(vlSelfRef.alu_tb__DOT__op) 
                                                                    >> 2U)))))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                     ? 
                                                    VL_SHIFTRS_III(16,16,4, (IData)(vlSelfRef.alu_tb__DOT__a), 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                     : 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     >> 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__b))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                     ? 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     << 
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                     : 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     ^ (IData)(vlSelfRef.alu_tb__DOT__b))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                     ? 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     | (IData)(vlSelfRef.alu_tb__DOT__b))
                                                     : 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                     ? 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     - (IData)(vlSelfRef.alu_tb__DOT__b))
                                                     : 
                                                    ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                     + (IData)(vlSelfRef.alu_tb__DOT__b)))))))),16);
    bufp->chgCData(oldp+3,(vlSelfRef.alu_tb__DOT__op),4);
}

void Valu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
