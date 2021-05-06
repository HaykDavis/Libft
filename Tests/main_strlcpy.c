int main()
{
	char i[15] = "1234567890";
	char p[10] = "pornofilm";
	printf("%lu\n", ft_strlcpy(p, i, 4));
	printf("%s\n", p);
}