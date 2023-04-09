#pragma once
#include "types.h"

static const Byte
    INTERRUPT_FLAG  = 0x00,
    CARRY_FLAG      = 0x01,
    PARITY_FLAG     = 0x02,
    ZERO_FLAG       = 0x03,
    OVERFLOW_FLAG   = 0x04,
    SIGN_FLAG       = 0x05;

struct CPU {
    Byte FLAGS;     // CPU FLAGS
    Word SP;        // Stack Pointer 
    Word PC;        // Program Counter
    Byte A, B, C;   // Registers
};