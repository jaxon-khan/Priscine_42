/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:04:15 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:04:19 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	l[2];

	l[0] = ft_strlen(s1);
	l[1] = ft_strlen(s2);
	if (ft_strlen(s2) < n)
	{
		ft_strncpy(s1 + l[0], s2, l[1]);
		s1[l[0] + l[1]] = '\0';
	}
	else
	{
		ft_strncpy(s1 + l[0], s2, n);
		s1[l[0] + n] = '\0';
	}
	return (s1);
}
