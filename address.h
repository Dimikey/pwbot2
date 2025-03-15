#include <windows.h>

extern DWORD addr_base_static;
extern DWORD offset_from_base_for_coords;
extern DWORD offset_hp;
extern DWORD offset_mp;
extern DWORD offset_maxhp;
extern DWORD offset_maxmp;
extern DWORD offset_target;
extern DWORD offset_exp;
extern DWORD offset_maxexp;
extern DWORD offset_target;

// This one seems to be static
extern DWORD addr_character_offset;
extern DWORD offset_character_struct;


// Storage for future actual addresses in running process
extern DWORD address_character_struct; // pointer to pointer
//extern DWORD addr_character_struc_actual;
extern DWORD address_hp;
extern DWORD addr_mp;
extern DWORD addr_maxhp;
extern DWORD addr_maxmp;
extern DWORD address_target;
extern DWORD addr_exp;
extern DWORD addr_maxexp;
