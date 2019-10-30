/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 10:30:28 by linfan            #+#    #+#             */
/*   Updated: 2019/05/15 11:20:02 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 40
# define MAX_FD 4860
# define NEXTLINE 1
# define ERROR -1
# define EDF 0
# include "libft/libft.h"

void	ft_mk_end(char *s, char c);
int		ft_iteration(char *readline, char **line);
int		get_next_line(const int fd, char **line);
#endif
