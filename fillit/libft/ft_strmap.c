/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:03:26 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:03:28 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		s1[i] = f(s[i]);
	return (s1);
}
