#include "libft.h"

int	ft_isalnum(int ch)
{
	if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
		return (1);
	else if ('0' <= ch && ch <= '9')
		return (1);
	else
		return (0);
}
