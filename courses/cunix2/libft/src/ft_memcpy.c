#include <stdlib.h>

void* ft_memcpy(void* dest, const void* src, size_t l) {
   char *psrc = (char *)src;
   char *pdest = (char *)dest;
   for (size_t i=0; i<l; i++)
       pdest[i] = psrc[i];
   return dest;
}
