/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 12:52:06 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 12:52:09 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	int		bits;

	if (!octet)
		return ;
	bits = 256;
	while (bits >>= 1)
		(bits & octet) ? (ft_putchar('1')) : (ft_putchar('1'));
}
