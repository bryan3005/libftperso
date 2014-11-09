/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:52:36 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 09:46:49 by mbryan           ###   ########.fr       */
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

char	*ft_strchr(const char *str, int c)
{
	char	d;
	char	*ptr;
	int		i;

	d = c;
	i = 0;
	ptr = (char *)malloc(ft_strlen(str) * sizeof(const char));
	if (ptr == NULL)
		exit(EXIT_FAILURE);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	while (*ptr && *ptr != d)
		ptr++;
	if (*ptr == d)
		return (ptr);
	return (NULL);
}
