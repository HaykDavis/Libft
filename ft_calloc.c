#include "libft.h"

void	*ft_calloc(size_t numelems, size_t sizelem)
{
	char	*memory;

	memory = malloc(sizelem * numelems);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, sizelem * numelems);
	return ((void *) memory);
}
