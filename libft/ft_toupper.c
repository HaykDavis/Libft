#include "libft.h"

int	ft_toupper(int ch)
{
	if ('a' <= ch && ch <= 'z')
		return (ch - 32);
	return (ch);
}
