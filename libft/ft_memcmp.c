#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char *) arr1;
	b = (char *) arr2;
	i = 0;
	while (i++ < n && a[i] == b[i])
		;
	if (i == n)
		return (0);
	return (a[i] - b[i]);
}
