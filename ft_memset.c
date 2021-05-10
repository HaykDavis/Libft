#include "libft.h"

void	*ft_memset(void *m, int s, size_t l)
{
	size_t			z;
	unsigned char	*o;

	o = (unsigned char *) m;
	z = 0;
	while (z < l)
	{
		o[z] = s;
		z++;
	}
	return ((void *) m);
}
