/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:50:29 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:50:32 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*r;
	const char	*s;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	r = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		r[i] = s[i];
		i++;
	}
	return (dst);
}
