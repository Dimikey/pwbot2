#include "address.h"

/** Addresses */
/**
  NOTES:
  - The static base address never changes on every program startup;
  - Square brackets [] mean data, stored by address
  - Rewritten for 1.6.x

*/
// The following addresses are essential. Obtained from tools
//DWORD addr_base_static = 0x00CA30F8; // updated to new relax 1.6.x (pwglobal)
DWORD addr_base_static = 0x00400000 + 0x00CA30F8; // Base module address + offset
DWORD address_character_struct;

DWORD offset_character_struct = 0x4; // Offset to character struct
DWORD offset_target = 0x644;
DWORD offset_hp = 0x4D4;

DWORD address_target;
DWORD address_hp;
