#include "libft.h"

int	ft_tolower(int ch)
{
	if ('A' <= ch && ch <= 'Z')
		return (ch + 32);
	return (ch);
}
