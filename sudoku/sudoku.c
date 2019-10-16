/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:40:31 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 11:41:11 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	can_place(char to_place, int x, int y, char **puzzle)
{
	int i;
	int j;
	int box_x;
	int box_y;

	if (y >= 9 || x >= 9 || puzzle[y][x] != '.')
		return (0);
	box_x = (x / 3) * 3;
	box_y = (y / 3) * 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (puzzle[i + box_y][j++ + box_x] == to_place)
				return (0);
		}
		i++;
	}
	i = 0;
	while (i < 9)
		if (puzzle[y][i] == to_place || puzzle[i++][x] == to_place)
			return (0);
	return (1);
}

int	*next_free_space(char **puzzle, int x, int y)
{
	int *out;

	out = malloc(2 * sizeof(int));
	out[0] = y;
	out[1] = x;
	while (out[0] < 9)
	{
		if (out[1] >= 9)
			out[1] = 0;
		while (out[1] < 9)
		{
			if (puzzle[out[0]][out[1]] == '.')
				break ;
			out[1]++;
		}
		if (puzzle[out[0]][out[1]] == '.')
			break ;
		out[0]++;
	}
	return (out);
}

int	solve(char **puzzle, int start_x, int start_y)
{
	int		i;
	int		j;
	char	digit;
	int		*coords;

	coords = next_free_space(puzzle, start_x, start_y);
	i = coords[0];
	j = coords[1];
	free(coords);
	if (i >= 9 && j >= 9)
		return (1);
	digit = '1';
	while (digit <= '9')
	{
		if (can_place(digit, j, i, puzzle))
		{
			puzzle[i][j] = digit;
			if (solve(puzzle, j, i))
				return (1);
			else
				puzzle[i][j] = '.';
		}
		digit++;
	}
	return (0);
}
