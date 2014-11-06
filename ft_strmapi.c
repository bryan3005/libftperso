/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:08:29 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/06 12:18:21 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	index;
	char			*ptr;

	i = 0;
	index = 0;
	ptr = malloc(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		ptr[i] = f(index, s[i]);
		i++;
		index++;
	}
	return (ptr);
}
