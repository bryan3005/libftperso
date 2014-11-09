/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:44:04 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:45:42 by mbryan           ###   ########.fr       */
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

char	*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc (ft_strlen(str1) * sizeof(char));
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	i = 0;
	while (str1[i])
	{
		while (ptr[i + j] == str2[j])
			j++;
		if (str2[j] == '\0' && ptr)
			return (ptr + i);
		else if (str2[j - 1] == '\0' && ptr != '\0')
			return (ptr + i);
		j = 0;
		i++;
	}
	return (NULL);
}
