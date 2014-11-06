/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 09:49:52 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/06 10:14:06 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

char	*ft_strnew(size_t size)
{
	char *string;

	string = malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_memset(string, '\0', size + 1);
	return (string);
}
