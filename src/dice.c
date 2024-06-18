#include "dice.h"

#include <stdlib.h>
#include <time.h>

enum {
    minDiceVar = 1,
    maxDiceVar = 6,
};

uint_t roll_dice(void) { return ((uint_t)rand() % 6) + minDiceVar; }

dices_t roll_dices(uint_t numRolls) {
    dices_t dices = malloc(numRolls * sizeof(uint_t));
    for (uint_t roll = 0; roll < numRolls; roll++) {
        dices[roll] = roll_dice();
    }
    return dices;
}

void init_dice(void) { srand((uint_t)time(NULL)); }
