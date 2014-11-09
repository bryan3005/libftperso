/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 23:36:22 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:45:14 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t z;

	z = 0;
	while (src[z])
	{
		dst[z] = src[z];
		z++;
	}
	if (n > ft_strlen(src))
		while (dst[z])
		{
			dst[z] = '\0';
			z++;
		}
	return (dst);
}
