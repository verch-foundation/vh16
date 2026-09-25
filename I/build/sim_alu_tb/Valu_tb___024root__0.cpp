// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Valu_tb___024root___eval_sample(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_sample\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Valu_tb___024root___eval_ico(Valu_tb___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_ico\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Valu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Valu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

bool Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
    }
    Valu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Valu_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_body__act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Valu_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

bool Valu_tb___024root___eval_inact(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_inact\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("hdl/sim/alu_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Valu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Valu_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Valu_tb___024root___act_sequent__TOP__0(vlSelf);
            }
        }
        Valu_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Valu_tb___024root___eval_obs(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_obs\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Valu_tb___024root___eval_react(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_react\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Valu_tb___024root___eval_postponed(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_postponed\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__a = 0x000aU;
    vlSelfRef.alu_tb__DOT__b = 0x0014U;
    vlSelfRef.alu_tb__DOT__op = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hdl/sim/alu_tb.sv", 
                                         22);
    VL_WRITEF_NX("ADD: %0d + %0d = %0d\n",3, '#',16,vlSelfRef.alu_tb__DOT__a
                 , '#',16,(IData)(vlSelfRef.alu_tb__DOT__b)
                 , '#',16,vlSelfRef.alu_tb__DOT__dut__DOT__ret);
    vlSelfRef.alu_tb__DOT__a = 0x0014U;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__op = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hdl/sim/alu_tb.sv", 
                                         31);
    VL_WRITEF_NX("SUB: %0d - %0d = %0d\n",3, '#',16,vlSelfRef.alu_tb__DOT__a
                 , '#',16,(IData)(vlSelfRef.alu_tb__DOT__b)
                 , '#',16,vlSelfRef.alu_tb__DOT__dut__DOT__ret);
    vlSelfRef.alu_tb__DOT__a = 0xff00U;
    vlSelfRef.alu_tb__DOT__b = 0x0f0fU;
    vlSelfRef.alu_tb__DOT__op = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hdl/sim/alu_tb.sv", 
                                         40);
    VL_WRITEF_NX("AND: %h & %h = %h\n",3, '#',16,vlSelfRef.alu_tb__DOT__a
                 , '#',16,(IData)(vlSelfRef.alu_tb__DOT__b)
                 , '#',16,vlSelfRef.alu_tb__DOT__dut__DOT__ret);
    vlSelfRef.alu_tb__DOT__a = 0xffffU;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__op = 8U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hdl/sim/alu_tb.sv", 
                                         49);
    VL_WRITEF_NX("SLT: -1 < 1 = %0d\n",1, '#',16,vlSelfRef.alu_tb__DOT__dut__DOT__ret);
    vlSelfRef.alu_tb__DOT__op = 9U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "hdl/sim/alu_tb.sv", 
                                         56);
    VL_WRITEF_NX("SLTU: 65535 < 1 = %0d\n",1, '#',16,vlSelfRef.alu_tb__DOT__dut__DOT__ret);
    VL_FINISH_MT("hdl/sim/alu_tb.sv", 60, "");
    co_return;
}

bool Valu_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Valu_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__dut__DOT__ret = (0x0000ffffU 
                                            & ((8U 
                                                & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                ? (
                                                   (- (IData)(
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
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__op))
                                                    ? 
                                                   ((2U 
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
                                                    : 
                                                   ((2U 
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
                                                      + (IData)(vlSelfRef.alu_tb__DOT__b)))))));
}

void Valu_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Valu_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
