/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_fillit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 14:11:42 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/12/18 15:07:07 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FILLIT_H
# define LIB_FILLIT_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

/*
** main.c
*/
int		main(int argc, char **argv);
/*
** read_input.c
*/
int		block_validator(char *block);
int		input_length(char *path);
char	**input_strings(char *path, int size);
int		print_strings(char **str);
char	***set_up(char *path);
/*
** matrices.c
*/
char	***gen_matrices(int size, int m, int n, char c);

int		print_matrices(char ***matrix);

int		fill_matrices(char ***matrix, char **str);
int		clean_row_matrices(char ***matrix);
int		clean_single_column(char ***matrix, int b, int i, int j);
int		clean_column_matrices(char ***matrix);
/*
** solver.c
*/
int		ft_floor_sqrt(int value);
int		num_tetra(char ***tetra);
char	**gen_row(int m, int n, char c);
int		**free_row(char **row);
int		print_row(char **row);
/*
** grid.c
*/
int		insert_tetra_grid(char **row, char **tetra, int x, int y);
int		insert_checker(char **row, char **tetra, int x, int y);
int		insert_check_complete(char **row, char **tetra, int x, int y);
int		bfs_big_fucking_solver(char **row, char ***tetra, int b);
int		solve(char ***matrix);
/*
** tetro_checker.c
*/
int		validate_tetro(char **str, int i, int j);
int		tetro_checker(char ***str, int i, int j);

#endif
