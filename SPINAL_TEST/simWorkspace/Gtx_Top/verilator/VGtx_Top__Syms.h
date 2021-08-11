// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VGTX_TOP__SYMS_H_
#define _VGTX_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VGtx_Top.h"

// SYMS CLASS
class VGtx_Top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VGtx_Top*                      TOPp;
    
    // CREATORS
    VGtx_Top__Syms(VGtx_Top* topp, const char* namep);
    ~VGtx_Top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
