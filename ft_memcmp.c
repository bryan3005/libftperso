/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:47:10 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:42:29 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	int		i;

	(void)n;
	i = 0;
	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	while (ptr1[i] == ptr2[i])
	{
		i++;
	}
	if (ptr1[i] != ptr2[i])
	{
		return (ptr1[i] - ptr2[i]);
	}
	return (0);
}
