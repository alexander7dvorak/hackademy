int my_strcmp(char *str1, char *str2) {
    while(*str1 && *str1 == *str2) { 
        ++str1; 
        ++str2; 
    }
    return *str1+*str2?(*str1>*str2?1:-1):0;
}
