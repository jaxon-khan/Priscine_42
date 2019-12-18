/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <ekhanevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 11:56:21 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/12/18 14:16:25 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_fillit.h"

int		main(int argc, char **argv)
{
	char ***matrices;

	if (argc < 2)
		ft_putendl("usage: fillit source_file");
	else if (argc > 2)
		ft_putendl("to much inputting, SHTAP!");
	else
	{
		matrices = set_up(argv[1]);
		if (!matrices)
			return (1);
		solve(matrices);
		return (0);
	}
	return (1);
}
