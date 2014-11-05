/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:45:00 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 14:57:00 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	e;
	unsigned char	*cb;
	size_t			i;

	cb = (unsigned char *)b;
	e = (unsigned char)c;
	i = 0;
	while (len > 0)
	{
		cb[i] = e;
		i++;
		len--;
	}
	return (b);
}

int		main(void)
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}
