/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpointeursurfoncton.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:08:29 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/06 17:15:16 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char functionbidon(unsigned int i, char c)
{
	c += -32;
	printf("%u\n",i );
	return (c);
}
size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	index;
	char			*ptr;

	i = 0;
	index = 0;
	ptr = malloc(ft_strlen(s) * sizeof(char));
	while (s[i])
	{
		ptr[i] = f(index, s[i]);
		i++;
		index++;
	}
	return (ptr);
}

int	main(void)
{
	char s[] = "bonjour";

	char (*f)(unsigned int, char);

	f = &functionbidon;
	printf("%s\n", ft_strmapi(s,f));
	return (0);
}
