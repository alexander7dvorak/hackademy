int ft_tolower(int ch) {
    return (ch<'A')||(ch>'Z') ? ch : ch - 'A' + 'a';
}
