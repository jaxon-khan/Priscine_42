/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:56:46 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 12:56:57 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	char	*ptr;

	ptr = s;
	while (ptr && *ptr)
		*(ptr++) = '\0';
}