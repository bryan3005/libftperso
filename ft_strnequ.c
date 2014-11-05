/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 18:00:09 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 18:19:00 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && n > 0)
	{
		if ((s1[i] == '\0' && s2[i] == '\0') || n == 1)
			return (1);
		i++;
		n--;
	}
	return (0);
}
