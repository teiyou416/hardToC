// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vout.h for the primary calling header

#ifndef VERILATED_VOUT___024ROOT_H_
#define VERILATED_VOUT___024ROOT_H_  // guard

#include "verilated.h"

class Vout__Syms;

class Vout___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vout__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vout___024root(Vout__Syms* symsp, const char* v__name);
    ~Vout___024root();
    VL_UNCOPYABLE(Vout___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
