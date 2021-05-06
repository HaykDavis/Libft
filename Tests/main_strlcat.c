int main()
{
	char dst[15] = "123456789";
	char src[15] = "1234567890";
	printf("%lu\n", ft_strlcat(dst, src, 4));
	printf("%s\n", src);
}