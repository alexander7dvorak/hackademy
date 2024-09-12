#include <stdlib.h>

void* ft_memchr(const void* s, int ch, size_t l) {
    char* s1 = (char*)s;
    for(size_t i = 0; i<l; ++i) {
        if(*s1 == (char)ch)
            return (void*) s1;
        else
            s1++;
    }
    return '\0';
    
}

