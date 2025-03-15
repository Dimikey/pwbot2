#include <windows.h>
#include "utils.h"

#define COMMON_DELAY 400

extern HANDLE pw_pHandle;
extern BOOL is_bot_active;

int char_get_target();

void char_set_target(int target);
void char_collect_loot();

int char_get_hp();
/*int char_get_maxhp();
int char_get_mp();
int char_get_maxmp();
*/
void char_attack();

