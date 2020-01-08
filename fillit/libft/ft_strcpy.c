/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:58:35 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:58:38 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
