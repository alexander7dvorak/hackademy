int ft_memcmp(void *a, void *b, int l) {
    unsigned char *p = a;
    unsigned char *q = b;
    while (l > 0)
    {
        if (*p != *q)
            return (*p - *q);
        l--;
        p++;
        q++;
    }
    return 0;
}
