#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	z;

	z = (int) n;
	i = 0;
	if (z < 0)
		return (-1);
	while (i < (int)n - 1 && str1[i] == str2[i] && str1[i])
		i++;
	if (i == (int)n)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
