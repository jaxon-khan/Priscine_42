/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leakage_deal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:47:13 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 11:49:29 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

void	delete_tet(t_tetris **t)
{
	t_tetris	*tmp;

	while (*t)
	{
		ft_memdel((void **)&(*t)->x);
		ft_memdel((void **)&(*t)->y);
		(*t)->prev = NULL;
		(*t)->letter = (char)NULL;
		tmp = (*t);
		*t = (*t)->next;
		tmp->next = NULL;
		ft_memdel((void **)&tmp);
	}
	t = NULL;
}

void	ft_intdel(int ***coords)
{
	ft_memdel((void **)(&(*coords)[0]));
	ft_memdel((void **)(&(*coords)[1]));
	ft_memdel((void **)(*coords));
}

void	delete_field(char ***field, int n)
{
	int		i;

	i = -1;
	while (++i < n)
	{
		ft_memdel((void **)&(*field)[i]);
	}
	free(*field);
	field = NULL;
}
