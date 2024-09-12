#include <stddef.h>

char* ft_strchr(char *str, int ch) {
    do {
        if (*str == (char) ch) return str;
        } while (*str++) ;
    return '\0';
}
