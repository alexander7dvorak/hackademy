#include <stddef.h>

char* ft_strrchr(char *str, int ch) {
    char* p = '\0';
    do {
        if (*str == (char) ch) p = str;
        } while (*str++) ;
    return p;
}
