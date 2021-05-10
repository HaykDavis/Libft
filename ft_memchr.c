#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*m;
	char	s;
	size_t	i;

	m = (char *) arr;
	s = (char) c;
	i = 0;
	while (i < n)
	{
		if (m[i] == s)
			return (m + i);
		i++;
	}
	return (NULL);
}
