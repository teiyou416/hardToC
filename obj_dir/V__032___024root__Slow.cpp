// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See V__032.h for the primary calling header

#include "verilated.h"

#include "V__032__Syms.h"
#include "V__032___024root.h"

void V__032___024root___ctor_var_reset(V__032___024root* vlSelf);

V__032___024root::V__032___024root(V__032__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    V__032___024root___ctor_var_reset(this);
}

void V__032___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

V__032___024root::~V__032___024root() {
}
