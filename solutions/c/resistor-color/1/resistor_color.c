#include "resistor_color.h"

int color_code(resistor_band_t color) {
    return color; // El enum ya tiene el valor numérico correspondiente
}

const resistor_band_t *colors(void) {
    // Arreglo estático con todos los valores en orden
    static const resistor_band_t band_colors[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    
    return band_colors;
}



