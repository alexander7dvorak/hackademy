#ifndef TEST_H_
# define TEST_H_
#include <stdlib.h>

unsigned int ft_strlen(const char* str);
void ft_bzero(char* s, int len);
char* ft_strdup(char* src);
int ft_strncmp(const char* s1, const char* s2, int l );
char* ft_strchr(char* str, int ch);
char* ft_strrchr(char* str, int ch);
int ft_isalpha(int arg);
int ft_isdigit(int arg);
int ft_isascii(int arg);
int ft_toupper(int ch);
int ft_tolower(int ch);

int ft_abs(int x);
div_t ft_div(int x, int y);
char* ft_strstr(const char* s1, char* s2);
void* ft_memset(void* s, int c, size_t l);
void* ft_memcpy(void* dest, const void* src, size_t l);
void* ft_memccpy(void* dest, const void* src, int ch, size_t l);
void* ft_memmove(void* dest, const void* src, size_t l);
void* ft_memchr(const void* s, int ch, size_t l);
int ft_memcmp(const void* a, const void* b, int l);

#endif
