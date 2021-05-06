#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	d = (unsigned char *) destination;
	s = (unsigned char *) source;
	if (s < d)
	{
		while (n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((void *) destination);
}
