/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:39:28 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:42:05 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	e;
	unsigned char	*cb;
	size_t			i;

	cb = (unsigned char *)b;
	e = (unsigned char)c;
	i = 0;
	while (len > 0)
	{
		cb[i] = e;
		i++;
		len--;
	}
	return (b);
}

void	*ft_memalloc(size_t size)
{
	void *memaloc;

	memaloc = (void *)malloc (size);
	if (memaloc == NULL)
		return (NULL);
	ft_memset(memaloc, 0, size);
	return (memaloc);
}
