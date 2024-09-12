int my_atoi(const char *nptr) {
    int out = 0;
    int i = 0;
    int sign = 1;
    
    if(nptr[0] == '-') {
        sign = -1;
        ++i;
    }
    
    while(nptr[i] != '\0') {
        if(nptr[i] < '0' || nptr[i] > '9')
            break;
        else
            out = out * 10 + sign * (nptr[i++] - '0');
    }

    return out;
}
