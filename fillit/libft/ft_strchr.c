/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:57:32 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:57:41 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*ss;
	char	cc;

	i = 0;
	ss = (char *)s;
	cc = (char)c;
	while (ss[i] != '\0' && ss[i] != cc)
		i++;
	if (ss[i] == cc)
		return (ss + i);
	return (NULL);
}
