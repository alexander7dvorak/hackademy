#include <stdlib.h>

void* ft_memmove(void* dest, const void* src, size_t l) {
    char* dest1 = (char*) dest;
    const char* src1 = (const char*) src;
    char* tmp  = (char*) malloc(sizeof(char) * l);
    if(NULL == tmp)
        return NULL;
    else {
        size_t i = 0;
        for(i =0; i < l ; ++i) {
            *(tmp + i) = *(src1 + i);
        }
        for(i =0 ; i < l ; ++i) {
            *(dest1 + i) = *(tmp + i);
        }
        free(tmp);
    }
    return dest;
}

