/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:12:12 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/06 11:39:48 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int , char *))
{
	unsigned int index;

	index = 0;
	while (*s)
	{
		f(index, s);
		s++;
		index++;
	}
}
