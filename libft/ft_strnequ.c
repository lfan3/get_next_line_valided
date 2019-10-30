/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:30:39 by linfan            #+#    #+#             */
/*   Updated: 2019/04/29 15:51:02 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	if (s1 != NULL && s2 != NULL)
	{
		i = ft_strncmp(s1, s2, n);
		if (i != 0)
			return (0);
		return (1);
	}
	return (0);
}
