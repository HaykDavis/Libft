#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len != 0 && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr(s1, 0, len + 1);
	return (str);
}
