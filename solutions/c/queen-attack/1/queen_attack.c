#include "queen_attack.h"
#include <stdlib.h>


attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    // 1. Validar que ninguna reina esté fuera del tablero (tablero de 0 a 7)
    if (queen_1.row > 7 || queen_1.column > 7 ||
        queen_2.row > 7 || queen_2.column > 7) {
        return INVALID_POSITION;
    }

    // 2. Validar que no ocupen exactamente la misma casilla
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }

    // 3. Comprobar si comparten fila, columna o diagonal
    if (queen_1.row == queen_2.row ||
        queen_1.column == queen_2.column ||
        abs((int)queen_1.row - (int)queen_2.row) == abs((int)queen_1.column - (int)queen_2.column)) {
        return CAN_ATTACK;
    }

    // 4. Si no se cumple nada de lo anterior, no se pueden atacar
    return CAN_NOT_ATTACK;
}