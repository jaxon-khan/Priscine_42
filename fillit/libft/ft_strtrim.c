/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:11:21 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:11:23 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*r;
	size_t	l;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	l = ft_strlen(s);
	l--;
	while ((s[l] == ' ' || s[l] == '\n' || s[l] == '\t') && l > i)
		l--;
	if (l == i)
		return (ft_strnew(1));
	r = ft_strnew(++l - i);
	if (!r)
		return (NULL);
	r = ft_strsub(s, i, l - i);
	return (r);
}
