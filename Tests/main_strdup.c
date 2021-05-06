int main()
{
	char i[15] = "12345678";
	char *d;
	d = ft_strdup(i);
	printf("%s\n", d);
	free (d);
}
