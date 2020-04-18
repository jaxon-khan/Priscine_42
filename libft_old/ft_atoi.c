/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:06:28 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 17:21:16 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	unsigned long long	nmbr;
	char				check;

	nmbr = 0;
	while ((*str < 14 && *str > 8) || *str == 32)
		str++;
	check = '+';
	if (*str == '-' || *str == '+')
	{
		check = *str;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		nmbr = nmbr * 10 + (*str - '0');
		str++;
	}
	if (nmbr > 9223372036854775807)
		return (check == '-' ? 0 : -1);
	return (check == '-' ? -nmbr : nmbr);
}
