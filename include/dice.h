#pragma once

typedef unsigned int uint_t;

uint_t roll_dice(void);

typedef uint_t * dices_t;

dices_t roll_dices(uint_t numRolls);

void init_dice(void);
