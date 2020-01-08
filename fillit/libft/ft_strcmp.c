/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:58:19 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:58:22 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	result;
	size_t			i;
	unsigned char	*sc1;
	unsigned char	*sc2;

	i = 0;
	result = 0;
	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while ((sc1[i] != '\0') || (sc2[i] != '\0'))
	{
		result = (unsigned int)(sc1[i] - sc2[i]);
		if (result != 0)
			return ((int)result);
		i++;
	}
	return (result);
}
