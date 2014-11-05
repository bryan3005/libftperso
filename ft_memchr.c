/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:19:31 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 16:43:35 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	char			*q;
	int				i;

	i = 0;
	d = (unsigned char)c;
	q = (char *)s;
	while (n > 0)
	{
		if (q[i] == d)
			return (&q[i]);
		i++;
		n--;
	}
	return (NULL);
}

int main(void)
{
  char *str = "devientdouxlamasticot";
    char search = 'x';
   char *trys;

   trys = memchr(str, search, strlen(str));

   printf("String after |%c| is - |%s|\n", search, trys);

   return(0);
}