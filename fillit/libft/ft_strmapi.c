/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:03:40 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:03:48 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	if (!(s1 = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		s1[i] = f(i, s[i]);
	return (s1);
}
