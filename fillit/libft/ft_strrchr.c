/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:09:19 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:09:36 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	char	*sc;
	char	cc;

	sc = (char *)s;
	cc = (char)c;
	r = NULL;
	while (*sc)
	{
		if (*(sc) == cc)
			r = sc;
		sc++;
	}
	if (*sc == cc)
		r = sc;
	return (r);
}
