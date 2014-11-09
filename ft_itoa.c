/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:07:25 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 01:42:00 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
		n *= -1;
	if (n == 0 && len == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	i = ft_len(n) - 1;
	ptr = malloc(i + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[i + 2] = '\0';
	if (n < 0)
	{
		ptr[0] = ('-');
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		ptr[i] = ('0' + (n % 10));
		n = n / 10;
		i--;
	}
	if (n < 10)
	{
		ptr[i] = (n + '0');
	}
	return (ptr);
}
