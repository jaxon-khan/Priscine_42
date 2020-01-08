/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:01:54 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:01:56 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	r = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!r)
		return (NULL);
	ft_strcpy(r, s1);
	ft_strcat(r, s2);
	return (r);
}
