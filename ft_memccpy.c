#include "libft.h"

void	*ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			l;

	d = (unsigned char *) destination;
	s = (unsigned char *) source;
	l = 0;
	while (l < n)
	{
		d[l] = s[l];
		if (s[l] == (unsigned char) c)
			return ((void *) d + l + 1);
		l++;
	}
	return (NULL);
}
