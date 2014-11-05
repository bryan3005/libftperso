/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:13:46 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/05 10:30:26 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc (ft_strlen(s1) * sizeof(char));
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(s1);
	s1 = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	while (ptr[i])
	{
		s1[i] = ptr[i];
		i++;
	}
	while (s2[j] && n > 0)
	{
		s1[i] = s2[j];
		j++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}

int main(void)
{
	char str[100] = "corobizar";
	printf("%s\n", ft_strncat(str,"oktamer",3) );
	printf("%s\n", strncat(str,"oktamer",3) );
	return (0);
}