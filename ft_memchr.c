/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:19:31 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 17:27:24 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	char			*q;
	int				i;

	i = 0;
	d = (unsigned char)c;
	q = (char *)s;
	while (n > 0)
	{
		if (q[i] == d)
			return (&q[i]);
		i++;
		n--;
	}
	return (NULL);
}
