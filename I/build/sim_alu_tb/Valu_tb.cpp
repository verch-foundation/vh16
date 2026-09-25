// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Valu_tb::Valu_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Valu_tb::Valu_tb(const char* _vcname__)
    : Valu_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_tb::~Valu_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___eval_static(Valu_tb___024root* vlSelf);
void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf);
VL_ATTR_COLD bool Valu_tb___024root___eval_stl(Valu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Valu_tb___024root___eval_sample(Valu_tb___024root* vlSelf);
bool Valu_tb___024root___eval_ico(Valu_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf);
bool Valu_tb___024root___eval_inact(Valu_tb___024root* vlSelf);
bool Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf);
bool Valu_tb___024root___eval_obs(Valu_tb___024root* vlSelf);
bool Valu_tb___024root___eval_react(Valu_tb___024root* vlSelf);
void Valu_tb___024root___eval_postponed(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_final(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__stl(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__ico(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__act(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__nba(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__obs(Valu_tb___024root* vlSelf);
VL_ATTR_COLD void Valu_tb___024root___eval_dump_triggers__react(Valu_tb___024root* vlSelf);

void Valu_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Valu_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Valu_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Valu_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Valu_tb::evalStatic() {
    Valu_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Valu_tb::evalInitial() {
    Valu_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Valu_tb::evalStl(bool firstIteration) {
    return Valu_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Valu_tb::evalSample() {
    Valu_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Valu_tb::evalIco(bool firstIteration) {
    return Valu_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Valu_tb::evalAct() {
    return Valu_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Valu_tb::evalInact() {
    return Valu_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Valu_tb::evalNba() {
    return Valu_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Valu_tb::evalObs() {
    return Valu_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Valu_tb::evalReact() {
    return Valu_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Valu_tb::evalPostponed() {
    Valu_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Valu_tb::evalFinal() {
    Valu_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersStl() {
    Valu_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersIco() {
    Valu_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersAct() {
    Valu_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersNba() {
    Valu_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersObs() {
    Valu_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Valu_tb::dumpTriggersReact() {
    Valu_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Valu_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Valu_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Valu_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Valu_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_tb::hierName() const { return vlSymsp->name(); }
const char* Valu_tb::modelName() const { return "Valu_tb"; }
unsigned Valu_tb::threads() const { return 1; }
void Valu_tb::prepareClone() const { contextp()->prepareClone(); }
void Valu_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Valu_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Valu_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Valu_tb___024root__trace_init_top(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_tb___024root*>(voidSelf);
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Valu_tb___024root__trace_decl_types(tracep);
    Valu_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_tb___024root__trace_register(Valu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Valu_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valu_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 4);
    Valu_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
