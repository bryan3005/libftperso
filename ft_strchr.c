/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:52:36 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 10:19:30 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
