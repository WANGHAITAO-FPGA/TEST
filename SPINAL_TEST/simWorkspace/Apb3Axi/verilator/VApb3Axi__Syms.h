// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAPB3AXI__SYMS_H_
#define _VAPB3AXI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VApb3Axi.h"

// SYMS CLASS
class VApb3Axi__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VApb3Axi*                      TOPp;
    
    // CREATORS
    VApb3Axi__Syms(VApb3Axi* topp, const char* namep);
    ~VApb3Axi__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
