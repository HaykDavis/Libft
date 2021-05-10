#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	l;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	l = 0;
	while (dst[l] && l < size)
		l++;
	while (src[i] && l + i + 1 < size)
	{
		dst[l + i] = src[i];
		i++;
	}
	if (l < size)
		dst[l + i] = '\0';
	return (l + len_src);
}
