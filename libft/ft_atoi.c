#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	point;
	int	n;

	i = 0;
	point = 1;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			point *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return (point * n);
}
