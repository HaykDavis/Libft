#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	z;

	c = (char *) s;
	z = 0;
	while (z < n)
	{
		c[z] = '\0';
		z++;
	}
}
