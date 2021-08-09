// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VEMIF_CTRL_TEST__SYMS_H_
#define _VEMIF_CTRL_TEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VEmif_Ctrl_test.h"

// SYMS CLASS
class VEmif_Ctrl_test__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VEmif_Ctrl_test*               TOPp;
    
    // CREATORS
    VEmif_Ctrl_test__Syms(VEmif_Ctrl_test* topp, const char* namep);
    ~VEmif_Ctrl_test__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
