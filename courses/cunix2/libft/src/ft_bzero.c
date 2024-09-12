void ft_bzero(char *s, int len) {
  for (int i = 0; i < len; i++) 
      s[i] = '\0';
}
