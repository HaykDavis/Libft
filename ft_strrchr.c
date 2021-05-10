#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;
	int	z;

	i = 0;
	z = (int)ft_strlen(str);
	while (z >= i)
	{
		if (str[z] == (char)ch)
			return ((char *)str + z);
		z--;
	}
	return (NULL);
}
