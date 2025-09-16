#include <cmath>
#include <emscripten/emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    double pyth(double a, double b) {
        return sqrt((a * a) + (b * b));
    }
}