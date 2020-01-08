/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 13:10:28 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 13:10:35 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		k = i;
		while (needle[j] == haystack[k] && needle[j] != '\0')
		{
			k++;
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + k - ft_strlen(needle)));
		i++;
	}
	if (*needle == '\0')
		return ((char *)haystack);
	return (NULL);
}
