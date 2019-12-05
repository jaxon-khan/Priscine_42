/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:13:12 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 13:13:26 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*string;

	if (!(string = ft_memalloc(size + 1)))
		return (NULL);
	i = 0;
	while (i < size)
		string[i++] = '\0';
	return (string);
}
