/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:46:42 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:46:48 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(sizeof(void) * size);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, size);
	return (ptr);
}
