#include "libft.h"

int	ft_isdigit(int ch)
{
	if ('0' <= ch && ch <= '9')
		return (1);
	else
		return (0);
}
