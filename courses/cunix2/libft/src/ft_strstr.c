#include <stdlib.h>

char* ft_strstr(const char *s1, const char *s2) {
  const char *p1 = s1, *p2 = s2;
  while(1) {
      if(!*p2) return (char *) s1;
      if(!*p1) return NULL;
      if(*p1++ != *p2++) { 
          p1 = ++s1; 
          p2 = s2; 
      }
  }
}
