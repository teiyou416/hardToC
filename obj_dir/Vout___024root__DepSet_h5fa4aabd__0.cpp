// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vout.h for the primary calling header

#include "verilated.h"

#include "Vout__Syms.h"
#include "Vout___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vout___024root___dump_triggers__act(Vout___024root* vlSelf);
#endif  // VL_DEBUG

void Vout___024root___eval_triggers__act(Vout___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vout__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vout___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vout___024root___dump_triggers__act(vlSelf);
    }
#endif
}
