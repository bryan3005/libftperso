/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:47:10 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 17:20:43 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char 	*ptr1;
	char	*ptr2;
	int		i;

	(void)n;
	i = 0;
	ptr1 = (char*)s1;
	ptr2 = (char*)s2;
	while(ptr1[i] == ptr2[i])
	{
		i++;
	}
	if(ptr1[i] != ptr2[i])
	{
		return (ptr1[i] - ptr2[i]);
	}
	return(0);
}

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0)
   {
      printf("str2 is less than str1");
   }
   else if(ret < 0) 
   {
      printf("str1 is less than str2");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
   printf("%d\n", ret);
   
   return(0);
}