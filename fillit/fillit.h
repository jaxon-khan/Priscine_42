/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 15:19:42 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/12/09 15:20:18 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"

typedef struct		s_tetri
{
	char			**minos;
	char			letter;
	int				height;
	int				width;
}					t_tetri;

typedef struct		s_size
{
	int				height;
	int				width;
}					t_size;

t_list				*ft_read_fd(int fd);

int					ft_bufcheck(char *buffer, int length);

char				**ft_new_tab(int size);
char				**ft_solve(t_list *tetriminos);

void				ft_display(char **map);
void				ft_throw_error();

#endif
