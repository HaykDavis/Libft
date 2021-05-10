#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		len_h;
	int		len_n;

	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	if (len_n > len_h && (int)len > len_h)
		return (NULL);
	if (len_n > len_h && (int)len < 0)
		return (NULL);
	if (len_n == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= (int)(len) - len_n || (int)len < 0)
	{
		if (haystack[0] == needle[0])
			if (ft_strncmp(haystack, needle, len_n) == 0)
				return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
