int ft_toupper(int ch) {
    return (ch<'a')||(ch>'z') ? ch : ch - 'a' + 'A';
}
