#include "libft.h"

int	ft_isprint(int ch)
{
	return (32 <= ch && ch < 127);
}
