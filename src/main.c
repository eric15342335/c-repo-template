#include "dice.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    puts("Hello, World!\nNumber of dice rolls:");
    uint_t numRolls = (uint_t)(fgetc(stdin) - '0');
    init_dice();
    puts("Rolling the dice...\n");
    dices_t dices = roll_dices(numRolls);
    for (uint_t roll = 0; roll < numRolls; roll++) {
        printf("Roll %d: %d\n", roll + 1, dices[roll]);
    }
    free(dices);
    return EXIT_SUCCESS;
}
