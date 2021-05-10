#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		p;
	char	*ptr;

	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	p = 0;
	while (s2[p])
	{
		ptr[i] = s2[p];
		i++;
		p++;
	}
	ptr[i] = '\0';
	return (ptr);
}
