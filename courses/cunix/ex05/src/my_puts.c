#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int my_puts(const char *s){
    int i = 0;
    char* out = (char *) malloc(sizeof(char) * (strlen(s)+1));

    while(s[i] != '\0'){
        out[i]= s[i];
        ++i;
    }
    out[i]= '\n';
    out[++i]= '\0';
   
    return write(1,out,strlen(out));
}
