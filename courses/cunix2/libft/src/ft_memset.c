#include <stdlib.h>

void* ft_memset(void* s, int c, size_t l) {
    unsigned char *p = s;
    while(l > 0) {
        *p = c;
        p++;
        l--;
    }
    return(s);
}
