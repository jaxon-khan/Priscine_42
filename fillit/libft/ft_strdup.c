/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:59:22 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:59:25 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	i;
	size_t	l;

	l = ft_strlen(s1);
	r = ft_strnew(l);
	if (!r)
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
