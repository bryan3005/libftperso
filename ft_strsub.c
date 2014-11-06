/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:57:55 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/06 14:12:58 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (start > 0)
	{
		s++;
		start--;
	}
	while (len > 0)
	{
		ptr[i] = s[i];
		i++;
		len--;
	}
	return (ptr);
}