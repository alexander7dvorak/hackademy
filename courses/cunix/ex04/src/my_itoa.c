#include <stdbool.h>
#include <stdlib.h>

void swap(char* p1, char* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

char* my_itoa(int nmb) {    
    int i = 0;
    bool isNegative = false;
    char* out = (char *) malloc(sizeof(char) * 33);
    
    if(nmb == 0)
        out[i++] = '0';
    
    if(nmb < 0) {
        isNegative = true;
        nmb = -nmb;
    }
    
    while(nmb != 0) {
        out[i++] = (char)('0' + nmb % 10);
        nmb/= 10;
    }
    
    if(isNegative)
        out[i++] = '-';
    
    out[i] = '\0';
    int start = 0;
    int end = i - 1;
    
    while(start < end) {
        swap(out + start,out + end);
        ++start;
        --end;
    }
    
    return out;   
}
