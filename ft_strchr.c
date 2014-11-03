/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:52:36 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/03 17:31:51 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr( const char *str, int c)
{
	char d;

	d = c;
	while (*str && *str != d)
		str++;
	if (*str == d)
		return str;
	return (NULL);

}

int main (void)
{
	printf("%s\n",ft_strchr("toto", 'o'));
	return (0);
}