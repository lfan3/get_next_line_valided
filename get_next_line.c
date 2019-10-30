/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 11:07:50 by linfan            #+#    #+#             */
/*   Updated: 2019/05/15 12:11:58 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

void			ft_mk_end(char *s, char c)
{
	while (*s != c && *s)
		s++;
	if (*s == c)
		*s = 0;
}

int				ft_iteration(char *readline, char **line)
{
	char		*temp1;
	char		*temp2;

	if (ft_strchr(readline, '\n'))
	{
		temp1 = *line;
		temp2 = ft_strdup(readline);
		ft_mk_end(temp2, '\n');
		readline = ft_strcpy(readline, ft_strchr(readline, '\n') + 1);
		*line = ft_strjoin(*line, temp2);
		free(temp1);
		free(temp2);
		return (NEXTLINE);
	}
	else
	{
		temp1 = *line;
		*line = ft_strjoin(*line, readline);
		free(temp1);
		ft_bzero(readline, BUFF_SIZE);
		return (EDF);
	}
}

int				get_next_line(const int fd, char **line)
{
	static char *readl[MAX_FD];
	int			read_numb;

	if (fd < 0 || !line || BUFF_SIZE <= 0 || fd >= MAX_FD)
		return (ERROR);
	if (!readl[fd])
		readl[fd] = ft_strnew(BUFF_SIZE);
	*line = ft_strnew(0);
	if (*readl[fd])
		if (ft_iteration(readl[fd], line))
			return (NEXTLINE);
	ft_bzero(readl[fd], BUFF_SIZE);
	while ((read_numb = read(fd, readl[fd], BUFF_SIZE)))
	{
		if (read_numb < 0)
			return (ERROR);
		if (ft_iteration(readl[fd], line))
			return (NEXTLINE);
	}
	if (**line == 0)
	{
		free(*line);
		return (EDF);
	}
	return (NEXTLINE);
}
