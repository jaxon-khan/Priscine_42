/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:38:51 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/10/16 11:40:09 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
#define SUDOKU_H
int can_place(char digit, int x, int y, char** puzzle);
int solve(char **puzzle, int start_x, int start_y);
#endif
