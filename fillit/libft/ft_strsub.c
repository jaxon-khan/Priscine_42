/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:10:48 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:10:57 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	r = ft_strnew(len);
	if (!r)
		return (NULL);
	while (++i < len)
		r[i] = s[start + i];
	r[i] = '\0';
	return (r);
}
