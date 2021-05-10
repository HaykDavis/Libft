#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dubl;
	int		i;

	dubl = (char *)malloc(sizeof(*dubl) * ft_strlen(str) + 1);
	if (!dubl)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dubl[i] = str[i];
		i++;
	}
	dubl[i] = '\0';
	return (dubl);
}
