#include "libft.h"

void	*ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	unsigned char	*o;
	unsigned char	*z;
	size_t			l;

	o = (unsigned char *) destination;
	z = (unsigned char *) source;
	l = 0;
	while (l < n)
	{
		o[l] = z[l];
		if (z[l] == (unsigned char) c)
			return ((void *) destination);
		l++;
	}
	return (NULL);
}
