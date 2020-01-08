/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetris.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:42:33 by ekhanevi          #+#    #+#             */
/*   Updated: 2020/01/08 11:43:45 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

t_tetris	*ft_tetris_new(int *x, int *y, char letter)
{
	t_tetris	*tet;
	int			i;

	i = -1;
	if (!(tet = (t_tetris *)malloc(sizeof(t_tetris))))
		return (NULL);
	if (!x || !y)
		return (NULL);
	if (!(tet->x = (int *)malloc(sizeof(int) * 4)))
		return (NULL);
	if (!(tet->y = (int *)malloc(sizeof(int) * 4)))
		return (NULL);
	while (++i < 4)
	{
		tet->x[i] = x[i];
		tet->y[i] = y[i];
	}
	tet->letter = letter;
	tet->prev = NULL;
	tet->next = NULL;
	return (tet);
}

void		ft_tet_to_end(t_tetris **my_tetris, t_tetris *part)
{
	t_tetris	*ptr;

	ptr = *my_tetris;
	while (ptr->next)
		ptr = ptr->next;
	part->prev = ptr;
	ptr->next = part;
}

static int	ft_find_coord(int *a, int *b, int c, int d)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (a[i] == c && b[i] == d)
			return (1);
	return (0);
}

void		ft_print_tet(t_tetris *s_t, int dimensions)
{
	int		x;
	int		y;

	y = -1;
	while (++y < dimensions)
	{
		x = -1;
		while (++x < dimensions)
		{
			if (ft_find_coord(s_t->x, s_t->y, x, y))
				ft_putchar(s_t->letter);
			else
				ft_putchar('.');
		}
		ft_putchar('\n');
	}
}
