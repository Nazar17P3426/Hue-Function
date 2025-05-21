#include <Windows.h>

int stage;
int r = 0, g = 0, b = 0;
COLORREF Hue(int shift) {
    switch (stage) {
        case 0:
            r = 255;
            b = 0;
            g < 255 ? g += shift : stage++;
            break;
        case 1:
            g = 255;
            b = 0;
            r > 0 ? r -= shift : stage++;
            break;
        case 2:
            g = 255;
            r = 0;
            b < 255 ? b += shift : stage++;
            break;
        case 3:
            b = 255;
            r = 0;
            g > 0 ? g -= shift : stage++;
            break;
        case 4:
            b = 255;
            g = 0;
            r < 255 ? r += shift : stage++;
            break;
        case 5:
            r = 255;
            g = 0;
            b > 0 ? b -= shift : stage = 0;
            break;
    }

    return RGB(r, g, b);
}
