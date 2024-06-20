// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "V__032.h"
#include "V__032__Syms.h"

//============================================================
// Constructors

V__032::V__032(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new V__032__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

V__032::V__032(const char* _vcname__)
    : V__032(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

V__032::~V__032() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void V__032___024root___eval_debug_assertions(V__032___024root* vlSelf);
#endif  // VL_DEBUG
void V__032___024root___eval_static(V__032___024root* vlSelf);
void V__032___024root___eval_initial(V__032___024root* vlSelf);
void V__032___024root___eval_settle(V__032___024root* vlSelf);
void V__032___024root___eval(V__032___024root* vlSelf);

void V__032::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate V__032::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    V__032___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        V__032___024root___eval_static(&(vlSymsp->TOP));
        V__032___024root___eval_initial(&(vlSymsp->TOP));
        V__032___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    V__032___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool V__032::eventsPending() { return false; }

uint64_t V__032::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* V__032::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void V__032___024root___eval_final(V__032___024root* vlSelf);

VL_ATTR_COLD void V__032::final() {
    V__032___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* V__032::hierName() const { return vlSymsp->name(); }
const char* V__032::modelName() const { return "V__032"; }
unsigned V__032::threads() const { return 1; }
