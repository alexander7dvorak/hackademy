#include <stdlib.h>

div_t ft_div(int x, int y) {
    div_t res = {
        x / y,
        x % y
    };
    return res;
}
