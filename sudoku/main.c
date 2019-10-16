/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:36:04 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 11:38:09 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "sudoku.h"

void	print_puzzle(char **puzzle)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, puzzle[i] + j, 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

char	**read_puzzle(char **lines)
{
	int		i;
	int		j;
	char	**puzzle;

	puzzle = malloc(sizeof(char *) * 9);
	i = 0;
	while (i < 9)
	{
		j = 0;
		puzzle[i] = malloc(sizeof(char) * 9);
		while (j < 9)
		{
			puzzle[i][j] = lines[i][j];
			j++;
		}
		i++;
	}
	return (puzzle);
}

void	destroy_puzzle(char **puzzle)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(puzzle[i]);
		i++;
	}
	free(puzzle);
}

int		main(int argc, char *argv[])
{
	char **puzzle;

	if (argc == 10)
	{
		puzzle = read_puzzle(argv + 1);
		if (solve(puzzle, 0, 0))
			print_puzzle(puzzle);
		else
			write(1, "Error\n", 6);
		destroy_puzzle(puzzle);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
