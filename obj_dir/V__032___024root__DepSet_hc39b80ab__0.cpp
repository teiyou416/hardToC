// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V__032.h for the primary calling header

#include "verilated.h"

#include "V__032__Syms.h"
#include "V__032___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void V__032___024root___dump_triggers__ico(V__032___024root* vlSelf);
#endif  // VL_DEBUG

void V__032___024root___eval_triggers__ico(V__032___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__032__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__032___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        V__032___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void V__032___024root___dump_triggers__act(V__032___024root* vlSelf);
#endif  // VL_DEBUG

void V__032___024root___eval_triggers__act(V__032___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    V__032__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    V__032___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        V__032___024root___dump_triggers__act(vlSelf);
    }
#endif
}
