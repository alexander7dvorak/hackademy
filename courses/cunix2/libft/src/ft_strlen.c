unsigned int ft_strlen(const char *str) {
    unsigned int i = 0;
    while(*str!='\0') {
        ++i;
        ++str;
    }
    return i;
}
