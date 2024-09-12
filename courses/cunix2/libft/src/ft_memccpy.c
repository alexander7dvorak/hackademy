#include <stddef.h>

void* ft_memccpy(void* dest, const void* src, int ch, size_t l) {
    char* dest1 = (char *)dest;
    char* src1 = (char *)src;
    char* p = 0;
    size_t i = 0;
    while (i < l && p == 0) {
        dest1[i] = src1[i];
        if (src1[i] == ((char)ch))
            p = dest1 + i + 1;
        i++;
    }
    return p;
}
