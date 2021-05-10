#include "libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t n)
{
	unsigned char	*o;
	unsigned char	*z;
	size_t			l;

	o = (unsigned char *) destination;
	z = (unsigned char *) source;
	l = 0;
	if (!destination && !source)
		return (NULL);
	while (l < n)
	{
		o[l] = z[l];
		l++;
	}
	return ((void *) destination);
}
