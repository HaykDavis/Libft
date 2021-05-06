#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		p;
	char	*ptr;

	ptr = malloc(sizeof(*ptr) * strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	p = 0;
	while (s1[i])
	{
		while (set[p])
		{
			if (set[p] == s1[i])
				i++;
			p++;
		}
		str[l];
		i++;
		p = 0;
	}
}