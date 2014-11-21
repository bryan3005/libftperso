/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 09:27:40 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/21 10:48:15 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nvel;

	nvel = (t_list*)malloc(sizeof(t_list));
	if (nvel == NULL)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		nvel->content = (void*)malloc(content_size);
		if (nvel == NULL)
			return (NULL);
		nvel->content = NULL;
		nvel->content_size = content_size;
		nvel->next = NULL;
		return (nvel);
	}
	nvel->content = (void*)malloc(content_size);
	if (nvel->content == NULL)
		return (NULL);
	ft_memmove(nvel->content, content, content_size);
	nvel->content_size = content_size;
	nvel->next = NULL;
	return (nvel);
}
