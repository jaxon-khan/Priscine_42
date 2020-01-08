/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:49:11 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:49:13 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*sc;

	sc = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*sc == (unsigned char)c)
			return ((void *)sc);
		sc++;
	}
	return (NULL);
}
