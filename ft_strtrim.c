/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:33:47 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:45:51 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(const char *s)
{
	int	len;
	int i;
	int j;

	len = 0;
	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	while (s[i])
	{
		j = i;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == ',')
		{
			j++;
			if (s[j] == '\0')
				return (len);
		}
		i++;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	ptr = malloc(ft_len(s) * sizeof(char));
	i = 0;
	j = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	while (s[i])
	{
		j = i;
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' || s[j] == ',')
		{
			j++;
			if (s[j] == '\0')
				return (ptr);
		}
		ptr[k] = s[i];
		i++;
		k++;
	}
	return (ptr);
}
