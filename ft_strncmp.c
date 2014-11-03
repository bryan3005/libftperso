/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:34:21 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/03 16:37:54 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		ret;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || i == n)
			return (0);
		i++;
	}
	ret = s1[i] - s2[i];
	return (ret);
}
