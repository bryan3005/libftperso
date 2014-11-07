/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:57:11 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/07 16:33:54 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t nn)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i != n && str[i])
	{
		str[i] = '\0';
		i++;
	}
}
