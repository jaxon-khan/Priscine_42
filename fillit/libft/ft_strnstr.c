/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:08:59 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:09:02 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		tmp = i;
		while (needle[j] == haystack[i] && needle[j] != '\0' && i < len)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i - ft_strlen(needle)));
		i = tmp;
		i++;
	}
	return (NULL);
}
