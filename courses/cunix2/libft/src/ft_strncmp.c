int ft_strncmp(const char * s1, const char * s2, int l ) {
    while ( l && *s1 && ( *s1 == *s2 ) ) {
        ++s1;
        ++s2;
        --l;
    }
    return (l == 0) ? 0 : ( *(unsigned char *)s1 - *(unsigned char *)s2 );
}

