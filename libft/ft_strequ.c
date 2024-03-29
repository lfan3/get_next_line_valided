/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linfan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 12:17:51 by linfan            #+#    #+#             */
/*   Updated: 2019/04/28 18:12:24 by linfan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char	const *s1, char const *s2)
{
	int		i;

	if (s1 != NULL && s2 != NULL)
	{
		i = ft_strcmp(s1, s2);
		if (i != 0)
			return (0);
		return (1);
	}
	return (0);
}
