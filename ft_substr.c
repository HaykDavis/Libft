#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*substring;

	if (!s)
		return (NULL);
	l = (size_t) start;
	if (len > ft_strlen(s) - (size_t) start)
		len = ft_strlen(s) - (size_t) start;
	if (ft_strlen(s) < (size_t) start)
		len = 0;
	substring = malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	if (s[i])
	{
		while (i < len && s[l + i] != '\0')
		{
			substring[i] = s[l + i];
			i++;
		}
	}
	substring[i] = '\0';
	return (substring);
}
