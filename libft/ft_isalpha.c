#include "libft.h"

int	ft_isalpha(int ch)
{
	if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
		return (1);
	else
		return (0);
}
