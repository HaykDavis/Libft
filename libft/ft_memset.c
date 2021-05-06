/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoares <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:05:48 by psoares           #+#    #+#             */
/*   Updated: 2021/04/16 14:19:54 by psoares          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_memset(void *m, int s, size_t l)
{
	size_t			z;
	unsigned char	*o;

	o = (unsigned char *) m;
	z = 0;
	while (z < l)
	{
		o[z] = s;
		z++;
	}
	return ((void *) m);
}
