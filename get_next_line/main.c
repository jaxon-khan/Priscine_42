/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:59:10 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/11/04 17:05:18 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

	int				main(int ac, char *av[])
{
	char	*line;
	int		fd;
	int		i;

	line = NULL;
	i = 1;
	if (ac == 1)
	{
		fd = open(0, O_RDONLY);
		while (get_next_line(0, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
			ft_memdel((void **)&line);
		}
		ft_memdel((void **)&line);
	}
	else
	{
		while (av[i])
		{
			fd = open(av[i], O_RDONLY);
			while (get_next_line(fd, &line) > 0)
			{
				ft_putstr(line);
				ft_putchar('\n');
				ft_memdel((void **)&line);
			}
			ft_memdel((void **)&line);
			i++;
		}
	}
	return (0);
}


