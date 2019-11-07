/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekhanevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:00:44 by ekhanevi          #+#    #+#             */
/*   Updated: 2019/11/06 15:53:07 by ekhanevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** finds the len until next line break (or the end of string)
*/

static size_t	dist_to_linebreak_or_zerochar(char *str)
{
	size_t	dist;

	dist = 0;
	while (str[dist] != '\n' && str[dist] != '\0')
		dist++;
	return (dist);
}

/*
** copy string and add zero chars up until end of buffer size
*/

static void		str_copy_and_clean(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= BUFF_SIZE)
	{
		dest[i] = '\0';
		i++;
	}
}

/*
** joins up until n chars from s2 into s1
*/

static char		*str_join_at_most(char **line, const char *buf, size_t n)
{
	char	*new_str;
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tmp = *line;
	if (!(new_str = ft_strnew(ft_strlen(tmp) + n + 1)))
		return (NULL);
	while (tmp[i])
	{
		new_str[i] = tmp[i];
		i++;
	}
	while (buf[j] && n)
	{
		new_str[i] = buf[j];
		i++;
		j++;
		n--;
	}
	free(tmp);
	return (new_str);
}

/*
** if that's the end of a line, stop execution
** but also prepare the buffer to next lecture
** also, handles the absence of a line feed
*/

static int		finish_line(char **line, char *buf_fd, size_t dist)
{
	if (buf_fd[dist] == '\n' || (buf_fd[0] == '\0' && *line[0]) != '\0')
	{
		if (buf_fd[dist] == '\n')
			str_copy_and_clean(buf_fd, &(buf_fd[dist + 1]));
		return (1);
	}
	return (0);
}

/*
** read from the file up until the end of a line
** and save this value inside *line, so others can access it
*/

int				get_next_line(int const fd, char **line)
{
	int			res;
	size_t		dist;
	static char	buf[OPEN_MAX][BUFF_SIZE + 1];

	if (fd < 0 || !line || fd > OPEN_MAX)
		return (-1);
	if (!(*line = ft_strnew(1)))
		return (-1);
	res = 1;
	while (res > 0)
	{
		if (buf[fd][0] == '\0')
			if ((res = read(fd, &buf[fd], BUFF_SIZE)) < 0)
				return (res);
		dist = dist_to_linebreak_or_zerochar(buf[fd]);
		*line = str_join_at_most(line, buf[fd], dist);
		if (finish_line(line, buf[fd], dist))
			return (1);
		ft_strclr((char *)&buf[fd]);
	}
	return (0);
}
