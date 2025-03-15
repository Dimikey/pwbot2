#include "char.h"
#include "console.h"
#include "address.h"
#include "input.h"

HANDLE pw_pHandle;
BOOL is_bot_active = FALSE;

int char_get_target() {

    int target;
    ReadProcessMemory(pw_pHandle, (void*)address_target, &target, sizeof(target), 0);
    return target;
}


void char_set_target(int target) {

    /*
        TODO: Implement code injections (or something like that, I still dunno)
        to do correct target setting.

        For now we can't pick arbitrary targets.
        Only some random nearby targets by pressing TAB.
    */

    /*
        TODO: Check whether target is a mob or not

        If it's not a mob, stop botting. We're probably being interrupted by a player!
    */

    console_log("Setting target: random nearby target");
    keypress(VK_TAB);

    /*
    console_log_1num_hex("Setting target", target);
    WriteProcessMemory(pw_pHandle, (void*)addr_target, &target, sizeof(target), 0);
    */

    Sleep(COMMON_DELAY);
}

void char_collect_loot() {
    const int LOOT_COLLECTING_ITERATIONS = 5;

    console_log_1num("Collecting loot. Pick up times", LOOT_COLLECTING_ITERATIONS);

    for(int i = 0; i < LOOT_COLLECTING_ITERATIONS; i++) {
        keypress(VK_F6);
        Sleep(COMMON_DELAY);
    }
}


int char_get_hp() {

    int hp;
    ReadProcessMemory(pw_pHandle, (void*)address_hp, &hp, sizeof(hp), 0);
    return hp;
}

/*
int char_get_maxhp() {

    int maxhp;
    ReadProcessMemory(pw_pHandle, (void*)addr_maxhp, &maxhp, sizeof(maxhp), 0);
    return maxhp;
}

int char_get_mp() {

    int mp;
    ReadProcessMemory(pw_pHandle, (void*)addr_mp, &mp, sizeof(mp), 0);
    return mp;
}

int char_get_maxmp() {

    int maxmp;
    ReadProcessMemory(pw_pHandle, (void*)addr_maxmp, &maxmp, sizeof(maxmp), 0);
    return maxmp;
}
*/

void char_attack() {
    //key_press(VK_F1);
    keypress(VK_F1);
}
