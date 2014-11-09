/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 00:30:18 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:43:51 by mbryan           ###   ########.fr       */
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

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc (ft_strlen(s1) * sizeof(char));
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(s1);
	s1 = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	while (ptr[i])
	{
		s1[i] = ptr[i];
		i++;
	}
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
