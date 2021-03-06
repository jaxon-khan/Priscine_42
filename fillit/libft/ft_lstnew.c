/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:46:18 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:46:21 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n_list;

	if (!(n_list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		n_list->content = NULL;
		content_size = 0;
	}
	else
	{
		if (!(n_list->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(n_list->content, content, content_size);
	}
	n_list->content_size = content_size;
	n_list->next = NULL;
	return (n_list);
}
