// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_V__032__SYMS_H_
#define VERILATED_V__032__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "V__032.h"

// INCLUDE MODULE CLASSES
#include "V__032___024root.h"

// SYMS CLASS (contains all model state)
class V__032__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    V__032* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    V__032___024root               TOP;

    // CONSTRUCTORS
    V__032__Syms(VerilatedContext* contextp, const char* namep, V__032* modelp);
    ~V__032__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
