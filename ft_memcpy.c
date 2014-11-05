/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:39:12 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 14:04:36 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*pchar1;
	char		*pchar2;

	pchar1 = (char *)src;
	pchar2 = (char *)dst;
	i = 0;
	while (n > 0)
	{
		pchar2[i] = pchar1[i];
		i++;
		n--;
	}
	return (dst);
}

int		main(void)
{
   const char src[50] = "Bonjour";
   char dest[50];
   int tab0[10] = {1};
   int tab1[5] = {2,3,4,5,9}; 

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 100);
   printf("After memcpy dest = %s\n", dest);
 //  memcpy(tab0,tab1,10);
ft_memcpy(tab0,tab1,100);

  //printf("%d\n",memcpy(tab0,tab1,10));
 printf("\n\n\n%d\n",tab0[0]);
   return(0);
}
