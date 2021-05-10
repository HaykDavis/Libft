#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) destination;
	s = (unsigned char *) source;
	if (!destination && !source)
		return (NULL);
	if (s < d)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*d++ = *s++;
	return ((void *) destination);
}
