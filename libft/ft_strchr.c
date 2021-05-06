#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;
	int	z;

	i = 0;
	z = (int)ft_strlen(str) + 1;
	while (i < z)
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
