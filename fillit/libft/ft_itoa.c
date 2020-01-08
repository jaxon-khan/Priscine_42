/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:43:11 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:43:14 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	l;

	if (n < 0)
	{
		n *= -1;
		l = 1;
	}
	else
		l = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

static	char	*ft_dealwithit(int n, int l, char *r)
{
	while (l >= 0)
	{
		r[l--] = n % 10 + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	return (r);
}

char			*ft_itoa(int n)
{
	char	*r;
	int		l;

	l = ft_intlen(n);
	r = ft_strnew(l);
	if (!(r = ft_strnew(l)))
		return (NULL);
	if (n == -2147483648)
	{
		r[0] = '-';
		r[1] = '2';
		n = 147483648;
	}
	else if (n < 0 && n != -2147483648)
	{
		r[0] = '-';
		n *= -1;
	}
	r[l--] = '\0';
	r = ft_dealwithit(n, l, r);
	return (r);
}
