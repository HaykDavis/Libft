int main()
{
    unsigned char src[15] = "1234567899";
    char *sym;
    sym = ft_memchr(src, '4', 10);
    if (sym != NULL)
        sym[0] = '!';
    printf ("src new: %s\n",src);
}