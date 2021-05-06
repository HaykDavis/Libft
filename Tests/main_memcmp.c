int main()
{
    int lol;
    unsigned char src[15] = "1234567890";
    unsigned char dst[15] = "1234564890";
    lol = ft_memcmp(src, dst, 10);
    printf("%d", lol);
}
