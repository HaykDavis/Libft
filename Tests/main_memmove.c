int main()
{
    unsigned char src[15] = "1234567890";
    // memmove (src, &src[3], 4);
    ft_memmove(src, &src[3], 4);
    printf ("src new: %s\n",src);
    
}