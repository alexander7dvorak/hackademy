#include <stdlib.h>
#include "../libft.h"

char* ft_strdup(char *src) {
    char* res = malloc(ft_strlen(src) + 1);
    char* p = res;
    while (*src)
        *p++ = *src++;
    *p = '\0';
    return res;
}
