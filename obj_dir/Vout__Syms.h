// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOUT__SYMS_H_
#define VERILATED_VOUT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vout.h"

// INCLUDE MODULE CLASSES
#include "Vout___024root.h"

// SYMS CLASS (contains all model state)
class Vout__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vout* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vout___024root                 TOP;

    // CONSTRUCTORS
    Vout__Syms(VerilatedContext* contextp, const char* namep, Vout* modelp);
    ~Vout__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
